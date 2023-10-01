import urllib3, json, urllib, ssl

ssl._create_default_https_context = ssl._create_unverified_context

urllib3.disable_warnings(urllib3.exceptions.InsecureRequestWarning)

atk_speed = 0


def GetAttackSpeed() -> float:
    global atk_speed
    player = urllib.request.urlopen(
        "https://127.0.0.1:2999/liveclientdata/activeplayer"
    )
    data = player.read()
    encoding = player.info().get_content_charset("utf8")
    result = json.loads(data.decode(encoding))
    atk_speed = result["championStats"]["attackSpeed"]
    return atk_speed
# import requests

# atk_speed = 0

# def GetAttackSpeed() -> float:
#     global atk_speed
#     try:
#         response = requests.get("https://127.0.0.1:2999/liveclientdata/activeplayer", verify=False)
#         response.raise_for_status()  # Check for HTTP request errors
#         data = response.json()
#         atk_speed = data["championStats"]["attackSpeed"]
#     except Exception as e:
#         print(f"Error fetching attack speed: {e}")
#     return atk_speed
