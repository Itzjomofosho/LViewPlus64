/*
for evade use spellbook activespell and/or missilelist
*/

#include "Offsets.h"

Offsets::Offsets() {};

int Offsets::GameTime						 = 0x21B8D2C; // 13.19

int Offsets::ObjIndex                        = 0x10;
int Offsets::ObjTeam                         = 0x3C; // 13.19
int Offsets::ObjMissileName                  = 0x60; 
int Offsets::ObjNetworkID                    = 0x10; // 13.19
int Offsets::ObjPos                          = 0x220; // 13.19
int Offsets::ObjMissileSpellCast             = 0x2e8;
int Offsets::ObjVisibility                   = 0x310; // 13.19
int Offsets::ObjSpawnCount                   = 0x328;
int Offsets::ObjSrcIndex                     = 0x290; 
int Offsets::ObjMana                         = 0x340; // 13.19
int Offsets::ObjMaxMana						 = 0x358; // 13.19
int Offsets::ObjRecallState                  = 0xF40; // 13.19
int Offsets::ObjHealth                       = 0x1058; // 13.19
int Offsets::ObjMaxHealth                    = 0x1070; // 13.19
int Offsets::ObjAbilityHaste				 = 0x1498; // 13.19
int Offsets::ObjLethality					 = 0x1598; // 13.19
int Offsets::ObjArmor                        = 0x1694; // 13.19
int Offsets::ObjBonusArmor					 = 0x1698; // 13.19
int Offsets::ObjMagicRes                     = 0x169c; // 13.19
int Offsets::ObjBonusMagicRes				 = 0x16a0; // 13.19
int Offsets::ObjBaseAtk                      = 0x166c; // 13.19
int Offsets::ObjBonusAtk                     = 0x15d8; // 13.19
int Offsets::ObjMoveSpeed                    = 0x16AC; // 13.19
int Offsets::ObjSpellBook					 = 0x30b8; // 13.19
int Offsets::ObjTransformation               = 0x3040;
int Offsets::ObjName                         = 0x3858; // 13.19
int Offsets::PlayerName						 = 0x60; // 13.19
int Offsets::ObjLvl                          = 0x3FC0; // 13.19
int Offsets::ObjExpiry                       = 0x298;
int Offsets::ObjCrit                         = 0x1c90; // 13.19
int Offsets::ObjCritMulti                    = 0x1c78; // 13.19
int Offsets::ObjAbilityPower                 = 0x15e8; // 13.19
int Offsets::ObjAtkSpeedMulti                = 0x1668;
int Offsets::ObjAtkRange                     = 0x16b4; // 13.19
int Offsets::ObjTargetable					 = 0xEB0; // 13.19
int Offsets::ObjInvulnerable				 = 0x4F0; // 13.19
int Offsets::ObjIsMoving					 = 0x3638; 
int Offsets::ObjDirection					 = 0x2190; // 13.19
int Offsets::ObjItemList					 = 0x40A8; 

int Offsets::ObjExpierience					 = 0x33CC;
int Offsets::ObjMagicPen					 = 0x157c;
int Offsets::ObjMagicPenMulti				 = 0x1584;
int Offsets::ObjAdditionalApMulti			 = 0x15ec; // 13.19
int Offsets::ObjManaRegen					 = 0x14cc; // 13.19
int Offsets::ObjHealthRegen					 = 0x16a8; // 13.19

int Offsets::Ping							 = 0x4951b0;
int Offsets::OffPing						 = 0x0;
int Offsets::ShowPing						 = 0x0; 

int Offsets::Chat							 = 0x21c5d90; // 13.19
int Offsets::ChatIsOpen						 = 0xC90;

int Offsets::SpellBookActiveSpellCast = 0x2a20;
int Offsets::SpellBookSpellSlots = 0x6d0; 

int Offsets::ObjBuffManager = 0x27c8; // 13.19
int Offsets::BuffManagerEntriesArray = 0x18; // 13.19
int Offsets::BuffEntryBuff = 0x10; // 13.19
int Offsets::BuffType = 0x8; // 13.19
int Offsets::BuffEntryBuffStartTime = 0x18; // 13.19
int Offsets::BuffEntryBuffEndTime = 0x1c; // 13.19
int Offsets::BuffEntryBuffCount = 0x3c; // 13.19
int Offsets::BuffEntryBuffCountAlt = 0x38; // 13.19
int Offsets::BuffEntryBuffCountAlt2 = 0x28; // 13.19
int Offsets::BuffName = 0x8; // 13.19
int Offsets::BuffEntryBuffNodeStart = 0x20;
int Offsets::BuffEntryBuffNodeCurrent = 0x24;

int Offsets::ItemListItem                 = 0xC;
int Offsets::ItemInfo                     = 0x20;
int Offsets::ItemInfoId                   = 0x68;

int Offsets::CurrentDashSpeed = 0x300; // 13.19
int Offsets::IsDashing = 0x324; // 13.19
int Offsets::DashPos = 0x414; // 13.19
int Offsets::IsMoving = 0x2bc; // 13.19
int Offsets::NavBegin = 0x2d0; // 13.19
int Offsets::NavEnd = 0x2dc; // 13.19

int Offsets::ViewProjMatrices = 0x220d4d0; // 13.19
int Offsets::Renderer = 0x2215e60; // 13.19
int Offsets::RendererWidth = 0xC; // 13.19
int Offsets::RendererHeight = 0x10; // 13.19

int Offsets::SpellSlotLevel = 0x28;
int Offsets::SpellSlotTime = 0x30; 
int Offsets::SpellSlotAmmo = 0x54;
int Offsets::SpellSlotCharges = 0x58;
int Offsets::SpellSlotTimeCharge = 0x30; 
int Offsets::SpellSlotDamage = 0x90;
int Offsets::SpellSlotSpellInfo = 0x130;
int Offsets::SpellInfoSpellData = 0x60; 
int Offsets::SpellDataSpellName = 0x80; 
int Offsets::SpellDataMissileName = 0x80;
int Offsets::SpellSlotSmiteTimer = 0x68;
int Offsets::SpellSlotSmiteCharges = 0x5c;

int Offsets::ObjectManager = 0x21a9868; // 13.19

int Offsets::HeroList = 0x21a9988; // 13.19
int Offsets::MinionList = 0x21ac7f0; // 13.19
int Offsets::MissileList = 0x21c5cf0; // 13.19
int Offsets::TurretList = 0x21b3090; // 13.19

int Offsets::LocalPlayer = 0x21c4a28; // 13.19
int Offsets::UnderMouseObject = 0x21ac9e0; // 13.19

int Offsets::ObjectMapCount               = 0x48; 
int Offsets::ObjectMapRoot                = 0x40; 
int Offsets::ObjectMapNodeNetId           = 0x20; 
int Offsets::ObjectMapNodeObject          = 0x28; 

int Offsets::SpellCastSpellInfo = 0x8;
int Offsets::SpellCastStartTime = 0x544;
int Offsets::SpellCastStartTimeAlt = 0x534;
int Offsets::SpellCastCastTime = 0x4C0;
int Offsets::SpellCastStart = 0x80;
int Offsets::SpellCastEnd = 0x8C;
int Offsets::SpellCastSrcIdx = 0x18;
int Offsets::SpellCastDestIdx = 0x24;

int Offsets::MissileSpellInfo = 0x2e8; 
int Offsets::MissileSrcIdx = 0x370;
int Offsets::MissileDestIdx = 0x3c8;
int Offsets::MissileStartPos = 0x38c;
int Offsets::MissileEndPos = 0x398;

int Offsets::MinimapObject                = 0x21b8d98; // 13.19
int Offsets::MinimapObjectHud             = 0x320; // 13.19
int Offsets::MinimapHudPos                = 0x60; // 13.19
int Offsets::MinimapHudSize               = 0x68; // 13.19

int Offsets::AiManager = 0x36f0; // 13.19  
int Offsets::AiManagerStartPath = 0x2d0;
int Offsets::AiManagerEndPath = 0x2dc;
int Offsets::AiManagerTargetPosition = 0x14;
int Offsets::AiManagerIsMoving = 0x2bc;
int Offsets::AiManagerIsDashing = 0x324;
int Offsets::AiManagerCurrentSegment = 0x2c0;
int Offsets::AiManagerDashSpeed = 0x300;
int Offsets::ServerPos = 0x414;
int Offsets::Velocity = 0x300;

int Offsets::HudInstance = 0x21a9878; // 13.19