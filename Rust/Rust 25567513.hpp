```cpp
namespace AttackEntity
{
	inline auto animationDelay = std::uint32_t ( 0x2F0 );
	inline auto deployDelay = std::uint32_t ( 0x2E8 );
	inline auto effectiveRange = std::uint32_t ( 0x2F4 );
	inline auto lastTickTime = std::uint32_t ( 0x348 );
	inline auto nextAttackTime = std::uint32_t ( 0x340 );
	inline auto nextTickTime = std::uint32_t ( 0x350 );
	inline auto noHeadshots = std::uint32_t ( 0x33E );
	inline auto repeatDelay = std::uint32_t ( 0x2EC );
	inline auto timeSinceDeploy = std::uint32_t ( 0x358 );
}
```

## BaseCombatEntity

```cpp
namespace BaseCombatEntity
{
	inline auto _health = std::uint32_t ( 0x2B4 );
	inline auto _maxHealth = std::uint32_t ( 0x2B8 );
	inline auto baseProtection = std::uint32_t ( 0x238 );
	inline auto lifestate = std::uint32_t ( 0x2A8 );
	inline auto markAttackerHostile = std::uint32_t ( 0x2AE );
	inline auto skeletonProperties = std::uint32_t ( 0x230 );
	inline auto startHealth = std::uint32_t ( 0x240 );
}
```

## BaseCorpse

```cpp
namespace BaseCorpse
{
	inline auto blockDamageIfNotGather = std::uint32_t ( 0x2F0 );
	inline auto parentEnt = std::uint32_t ( 0x2D8 );
}
```

## BaseEntity

```cpp
namespace BaseEntity
{
	inline auto SendSignalBroadcast = std::uint32_t ( 0x36CBB20 );
	inline auto ServerRPC = std::uint32_t ( 0x3721110 );
	inline auto bounds = std::uint32_t ( 0x18C );
	inline auto flags = std::uint32_t ( 0x1C0 );
	inline auto model = std::uint32_t ( 0x1B8 );
	inline auto positionLerp = std::uint32_t ( 0xA0 );
	inline auto triggers = std::uint32_t ( 0x128 );
}
```

## BaseMelee

```cpp
namespace BaseMelee
{
	inline auto attackRadius = std::uint32_t ( 0x3A4 );
	inline auto blockSprintOnAttack = std::uint32_t ( 0x3A9 );
	inline auto canThrowAsProjectile = std::uint32_t ( 0x380 );
	inline auto damageProperties = std::uint32_t ( 0x388 );
	inline auto gathering = std::uint32_t ( 0x3E0 );
	inline auto maxDistance = std::uint32_t ( 0x3A0 );
}
```

## BaseMovement

```cpp
namespace BaseMovement
{
	inline auto Crawling = std::uint32_t ( 0x58 );
	inline auto Ducking = std::uint32_t ( 0x54 );
	inline auto Grounded = std::uint32_t ( 0x5C );
	inline auto InheritedVelocity = std::uint32_t ( 0x38 );
	inline auto Owner = std::uint32_t ( 0x30 );
	inline auto Running = std::uint32_t ( 0x50 );
	inline auto TargetMovement = std::uint32_t ( 0x44 );
	inline auto lastTeleportedTime = std::uint32_t ( 0x60 );
}
```

## BaseNetworkable

```cpp
namespace BaseNetworkable
{
	inline auto children = std::uint32_t ( 0x68 );
	inline auto parentEntity = std::uint32_t ( 0x38 );
	inline auto prefabID = std::uint32_t ( 0x54 );
}
```

## BaseNetworkableStatic - %b1ab04c76f5c267eadb87173c78396b8f006c3fc

```cpp
namespace BaseNetworkableStatic
{
	inline auto clientEntities = std::uint32_t ( 0x18 );
}
```

## BasePlayer

```cpp
namespace BasePlayer
{
	inline auto OnViewModeChanged = std::uint32_t ( 0x39A9F40 );
	inline auto _displayName = std::uint32_t ( 0x4C8 );
	inline auto _lookingAt = std::uint32_t ( 0x740 );
	inline auto clActiveItem = std::uint32_t ( 0x588 );
	inline auto clientTeam = std::uint32_t ( 0x538 );
	inline auto clothingMoveSpeedReduction = std::uint32_t ( 0x7C0 );
	inline auto clothingWaterSpeedBonus = std::uint32_t ( 0x7C4 );
	inline auto currentTeam = std::uint32_t ( 0x558 );
	inline auto eyes = std::uint32_t ( 0x3F0 );
	inline auto input = std::uint32_t ( 0x6E8 );
	inline auto inventory = std::uint32_t ( 0x5A8 );
	inline auto lastSentTick = std::uint32_t ( 0x3E8 );
	inline auto lastSentTickTime = std::uint32_t ( 0x698 );
	inline auto modelState = std::uint32_t ( 0x3A0 );
	inline auto modifiers = std::uint32_t ( 0x3F8 );
	inline auto mounted = std::uint32_t ( 0x5E0 );
	inline auto movement = std::uint32_t ( 0x5A0 );
	inline auto playerFlags = std::uint32_t ( 0x6D8 );
	inline auto playerModel = std::uint32_t ( 0x4F8 );
	inline auto userID = std::uint32_t ( 0x720 );
	inline auto weaponMoveSpeedScale = std::uint32_t ( 0x7B8 );
}
```

## BaseProjectile

```cpp
namespace BaseProjectile
{
	inline auto LaunchProjectile = std::uint32_t ( 0x606C460 );
	inline auto UpdateAmmoDisplay = std::uint32_t ( 0x608D7F0 );
	inline auto aimCone = std::uint32_t ( 0x418 );
	inline auto aimConePenaltyMax = std::uint32_t ( 0x424 );
	inline auto aimSway = std::uint32_t ( 0x400 );
	inline auto aimSwaySpeed = std::uint32_t ( 0x404 );
	inline auto aimconePenalty = std::uint32_t ( 0x46C );
	inline auto aimconePenaltyPerShot = std::uint32_t ( 0x420 );
	inline auto automatic = std::uint32_t ( 0x398 );
	inline auto canChangeFireModes = std::uint32_t ( 0x440 );
	inline auto currentBurst = std::uint32_t ( 0x4B8 );
	inline auto fractionalReload = std::uint32_t ( 0x3E8 );
	inline auto hipAimCone = std::uint32_t ( 0x41C );
	inline auto isBurstWeapon = std::uint32_t ( 0x43F );
	inline auto isReloading = std::uint32_t ( 0x484 );
	inline auto nextReloadTime = std::uint32_t ( 0x458 );
	inline auto numShotsFired = std::uint32_t ( 0x454 );
	inline auto primaryMagazine = std::uint32_t ( 0x3E0 );
	inline auto projectileVelocityScale = std::uint32_t ( 0x394 );
	inline auto recoil = std::uint32_t ( 0x408 );
	inline auto reloadEndDuration = std::uint32_t ( 0x3F4 );
	inline auto reloadFractionDuration = std::uint32_t ( 0x3F0 );
	inline auto reloadStartDuration = std::uint32_t ( 0x3EC );
	inline auto reloadTime = std::uint32_t ( 0x3D8 );
	inline auto stancePenalty = std::uint32_t ( 0x468 );
	inline auto stancePenaltyScale = std::uint32_t ( 0x430 );
	inline auto startReloadTime = std::uint32_t ( 0x460 );
}
```

## BaseViewModel

```cpp
namespace BaseViewModel
{
	inline auto animator = std::uint32_t ( 0xD0 );
	inline auto aspectOffset = std::uint32_t ( 0x100 );
	inline auto bob = std::uint32_t ( 0xB8 );
	inline auto lower = std::uint32_t ( 0xA0 );
	inline auto punch = std::uint32_t ( 0x98 );
	inline auto sway = std::uint32_t ( 0xC8 );
	inline auto useViewModelCamera = std::uint32_t ( 0x40 );
}
```

## Behaviour

```cpp
namespace Behaviour
{
	inline auto set_enabled = std::uint32_t ( 0xDFAE3F0 );
}
```

## BowWeapon

```cpp
namespace BowWeapon
{
	inline auto arrowBack = std::uint32_t ( 0x4DC );
	inline auto attackReady = std::uint32_t ( 0x4D8 );
	inline auto wasAiming = std::uint32_t ( 0x4E0 );
}
```

## BuildingBlock - %15247d48b314fa7c7e2265a68c0ffb7ae9cbde22

```cpp
namespace BuildingBlock
{
	inline auto apartmentList = std::uint32_t ( 0x20 );
}
```

## CameraUpdateHookStatic - %0fa40172565d558011b842bea40026295f4dd725

```cpp
namespace CameraUpdateHookStatic
{
	inline auto action = std::uint32_t ( 0xD0 );
}
```

## Component

```cpp
namespace Component
{
	inline auto get_gameObject = std::uint32_t ( 0xDFAF0D0 );
}
```

## CompoundBowWeapon

```cpp
namespace CompoundBowWeapon
{
	inline auto conditionLossHeldDelay = std::uint32_t ( 0x500 );
	inline auto conditionLossPerSecondHeld = std::uint32_t ( 0x4FC );
	inline auto movementPenalty = std::uint32_t ( 0x530 );
	inline auto movementPenaltyRampUpTime = std::uint32_t ( 0x4F8 );
	inline auto stringBonusDamage = std::uint32_t ( 0x4EC );
	inline auto stringBonusDistance = std::uint32_t ( 0x4F0 );
	inline auto stringBonusVelocity = std::uint32_t ( 0x4F4 );
	inline auto stringHoldDurationMax = std::uint32_t ( 0x4E8 );
	inline auto stringHoldTimeStart = std::uint32_t ( 0x53C );
}
```

## ConvarClientStatic - %f6800c07c949f9e40e0b3488d57462266c0e501c

```cpp
namespace ConvarClientStatic
{
	inline auto camlerp = std::uint32_t ( 0x3C8 );
	inline auto camspeed = std::uint32_t ( 0x7CC );
}
```

## ConvarGraphicsStatic - %e811f2a520c49d12baf319a57be3641ea6d6fbeb

```cpp
namespace ConvarGraphicsStatic
{
	inline auto _fov = std::uint32_t ( 0x370 );
}
```

## ConvarPlayerStatic - %a089443ed450473e96c8ad5eae2caab989c834d6

```cpp
namespace ConvarPlayerStatic
{
	inline auto clientTickInterval = std::uint32_t ( 0x1DC );
}
```

## EntityRealm - %36e8d7060cf0f653779f9e911b4aa62484f32ed5

```cpp
namespace EntityRealm
{
	inline auto entityList = std::uint32_t ( 0x18 );
}
```

## FlintStrikeWeapon

```cpp
namespace FlintStrikeWeapon
{
	inline auto _didSparkThisFrame = std::uint32_t ( 0x4D0 );
	inline auto _isStriking = std::uint32_t ( 0x4D1 );
	inline auto strikes = std::uint32_t ( 0x4D4 );
	inline auto successFraction = std::uint32_t ( 0x4C0 );
	inline auto successIncrease = std::uint32_t ( 0x4C4 );
}
```

## GameManager - %086ed472cca83fde97248da6f9885d51082b903a

```cpp
namespace GameManager
{
	inline auto CreatePrefab = std::uint32_t ( 0x62C3AA0 );
}
```

## GameManagerStatic - %f63738d3fe80056cf6671ca4e5e4f4c318c7955f

```cpp
namespace GameManagerStatic
{
	inline auto client = std::uint32_t ( 0x30 );
}
```

## GameObject

```cpp
namespace GameObject
{
	inline auto SetActive = std::uint32_t ( 0xDFB4430 );
}
```

## HeldEntity

```cpp
namespace HeldEntity
{
	inline auto viewModel = std::uint32_t ( 0x250 );
}
```

## HumanNPC

```cpp
namespace HumanNPC
{
	inline auto AdditionalLosBlockingLayer = std::uint32_t ( 0x848 );
	inline auto aimConeScale = std::uint32_t ( 0x858 );
	inline auto lastDismountTime = std::uint32_t ( 0x85C );
}
```

## InputMessage - %b8f262f841f3c6c447d7f81fd6f4923545be89c3

```cpp
namespace InputMessage
{
	inline auto aimAngles = std::uint32_t ( 0x18 );
	inline auto buttons = std::uint32_t ( 0x14 );
	inline auto mouseDelta = std::uint32_t ( 0x24 );
}
```

## InputState - %4e72d93d9afe4a5fce6a40252e0065d505333b1e

```cpp
namespace InputState
{
	inline auto current = std::uint32_t ( 0x18 );
	inline auto previous = std::uint32_t ( 0x20 );
}
```

## Interpolator - %77497369c3d48c92bb5051dd45198f093642a2bf

```cpp
namespace Interpolator
{
	inline auto last = std::uint32_t ( 0x10 );
	inline auto list = std::uint32_t ( 0x30 );
}
```

## Item - %580b72c4a898da2110fea9ef0c300da7d2eb3ac7

```cpp
namespace Item
{
	inline auto amount = std::uint32_t ( 0xAC );
	inline auto heldEntity = std::uint32_t ( 0x50 );
	inline auto info = std::uint32_t ( 0xB8 );
	inline auto uid = std::uint32_t ( 0x88 );
	inline auto worldEnt = std::uint32_t ( 0x40 );
}
```

## ItemContainer - %9171053831f12a00f5b8917d3198502932c116ef

```cpp
namespace ItemContainer
{
	inline auto flags = std::uint32_t ( 0x20 );
	inline auto itemList = std::uint32_t ( 0x40 );
	inline auto uid = std::uint32_t ( 0x50 );
}
```

## ItemDefinition

```cpp
namespace ItemDefinition
{
	inline auto category = std::uint32_t ( 0x58 );
	inline auto displayName = std::uint32_t ( 0x40 );
	inline auto itemid = std::uint32_t ( 0x20 );
	inline auto shortname = std::uint32_t ( 0x28 );
}
```

## ItemIconStatic - %fe043ad86b3c258a7c0d538166d0fe99314ea5bf

```cpp
namespace ItemIconStatic
{
	inline auto containerLootStartTimes = std::uint32_t ( 0x28 );
}
```

## ItemModProjectile

```cpp
namespace ItemModProjectile
{
	inline auto projectileObject = std::uint32_t ( 0x20 );
	inline auto projectileSpread = std::uint32_t ( 0x3C );
	inline auto projectileVelocity = std::uint32_t ( 0x40 );
	inline auto projectileVelocitySpread = std::uint32_t ( 0x44 );
}
```

## ListComponent

```cpp
namespace ListComponent
{
	inline auto InstanceList = std::uint32_t ( 0x18 );
}
```

## ListComponentProjectile - ListComponent`1

```cpp
namespace ListComponentProjectile
{
	inline auto TypeInfo = std::uint32_t ( 0x10BBD5B0 );
}
```

## ListDictionary - %5eb4cde877f32bce3740f3f4804a524186d8875d

```cpp
namespace ListDictionary
{
	inline auto vals = std::uint32_t ( 0x18 );
}
```

## ListHashSet - %d8b48153d2101b71b885068d1604c451fe65a28d

```cpp
namespace ListHashSet
{
	inline auto vals = std::uint32_t ( 0x10 );
}
```

## LoadingScreen - UI_LoadingScreen

```cpp
namespace LoadingScreen
{
	inline auto panel = std::uint32_t ( 0x30 );
}
```

## LocalPlayerStatic - %adb5899b8a4d81f71c6ff3aaa5de8b98bce4600f

```cpp
namespace LocalPlayerStatic
{
	inline auto Entity = std::uint32_t ( 0x100 );
}
```

## LootableCorpse

```cpp
namespace LootableCorpse
{
	inline auto lootPanelName = std::uint32_t ( 0x310 );
}
```

## Magazine

```cpp
namespace Magazine
{
	inline auto allowAmmoSwitching = std::uint32_t ( 0x29 );
	inline auto allowPlayerReloading = std::uint32_t ( 0x28 );
	inline auto ammoType = std::uint32_t ( 0x20 );
	inline auto capacity = std::uint32_t ( 0x18 );
	inline auto contents = std::uint32_t ( 0x1C );
	inline auto definition = std::uint32_t ( 0x10 );
}
```

## MainCamera

```cpp
namespace MainCamera
{
	inline auto mainCamera = std::uint32_t ( 0x8 );
}
```

## MixerSnapshotManager

```cpp
namespace MixerSnapshotManager
{
	inline auto defaultSnapshot = std::uint32_t ( 0x20 );
	inline auto loadingSnapshot = std::uint32_t ( 0x30 );
}
```

## Model

```cpp
namespace Model
{
	inline auto boneNames = std::uint32_t ( 0x58 );
	inline auto boneTransforms = std::uint32_t ( 0x50 );
}
```

## ModelState - %2838d3190d9986c7e95f635cd226f378e2e0e2c5

```cpp
namespace ModelState
{
	inline auto flags = std::uint32_t ( 0x14 );
	inline auto lookDir = std::uint32_t ( 0x2C );
	inline auto waterLevel = std::uint32_t ( 0x38 );
}
```

## NPCPlayer

```cpp
namespace NPCPlayer
{
	inline auto LegacyNavigation = std::uint32_t ( 0x824 );
	inline auto MovementTickStartDelay = std::uint32_t ( 0x7E8 );
	inline auto attackLengthMaxShortRangeScale = std::uint32_t ( 0x838 );
	inline auto damageScale = std::uint32_t ( 0x830 );
	inline auto finalDestination = std::uint32_t ( 0x7F8 );
	inline auto shortRange = std::uint32_t ( 0x834 );
}
```

## Object

```cpp
namespace Object
{
	inline auto m_CachedPtr = std::uint32_t ( 0x10 );
}
```

## PlayerCorpse

```cpp
namespace PlayerCorpse
{
	inline auto underwearSkin = std::uint32_t ( 0x340 );
}
```

## PlayerEyes

```cpp
namespace PlayerEyes
{
	inline auto bodyRotation = std::uint32_t ( 0x50 );
	inline auto viewOffset = std::uint32_t ( 0x40 );
}
```

## PlayerInput

```cpp
namespace PlayerInput
{
	inline auto bodyAngles = std::uint32_t ( 0x44 );
	inline auto state = std::uint32_t ( 0x28 );
}
```

## PlayerInventory

```cpp
namespace PlayerInventory
{
	inline auto containerBelt = std::uint32_t ( 0x38 );
	inline auto containerMain = std::uint32_t ( 0x78 );
	inline auto containerWear = std::uint32_t ( 0x58 );
	inline auto loot = std::uint32_t ( 0x48 );
}
```

## PlayerModel

```cpp
namespace PlayerModel
{
	inline auto _multiMesh = std::uint32_t ( 0x3C8 );
}
```

## PlayerTeam - %d82891f7a0c697e610d05f7253fb39664f457435

```cpp
namespace PlayerTeam
{
	inline auto members = std::uint32_t ( 0x50 );
}
```

## PlayerTeamMember - %87fffee5b8243c98772b9937914482bd4f7acd5f

```cpp
namespace PlayerTeamMember
{
	inline auto userID = std::uint32_t ( 0x38 );
}
```

## PlayerTick - %918c3b3bcd7d4bae8d906d7a60733f7ea63b1872

```cpp
namespace PlayerTick
{
	inline auto activeItem = std::uint32_t ( 0x28 );
	inline auto eyePos = std::uint32_t ( 0x48 );
	inline auto inputState = std::uint32_t ( 0x30 );
	inline auto modelState = std::uint32_t ( 0x10 );
	inline auto parentID = std::uint32_t ( 0x18 );
	inline auto position = std::uint32_t ( 0x38 );
}
```

## PlayerWalkMovement

```cpp
namespace PlayerWalkMovement
{
	inline auto groundAngle = std::uint32_t ( 0x108 );
	inline auto groundAngleNew = std::uint32_t ( 0x110 );
	inline auto groundNormal = std::uint32_t ( 0x160 );
	inline auto groundNormalNew = std::uint32_t ( 0x170 );
	inline auto groundTime = std::uint32_t ( 0x118 );
	inline auto groundVelocity = std::uint32_t ( 0x180 );
	inline auto groundVelocityNew = std::uint32_t ( 0x190 );
	inline auto jumpTime = std::uint32_t ( 0x120 );
	inline auto landTime = std::uint32_t ( 0x128 );
	inline auto maxVelocity = std::uint32_t ( 0x100 );
	inline auto previousInheritedVelocity = std::uint32_t ( 0x150 );
	inline auto previousPosition = std::uint32_t ( 0x130 );
	inline auto previousVelocity = std::uint32_t ( 0x140 );
}
```

## PositionLerp - %915976499b0654a8e250c1e3a3b156c5ca786eb5

```cpp
namespace PositionLerp
{
	inline auto interpolator = std::uint32_t ( 0x40 );
}
```

## ProgressBar

```cpp
namespace ProgressBar
{
	inline auto Instance = std::uint32_t ( 0x8 );
	inline auto leftField = std::uint32_t ( 0x40 );
	inline auto timeCounter = std::uint32_t ( 0x24 );
	inline auto timeFinished = std::uint32_t ( 0x20 );
}
```

## Projectile

```cpp
namespace Projectile
{
	inline auto currentPosition = std::uint32_t ( 0x170 );
	inline auto currentVelocity = std::uint32_t ( 0x164 );
	inline auto drag = std::uint32_t ( 0x34 );
	inline auto gravityModifier = std::uint32_t ( 0x38 );
	inline auto initialDistance = std::uint32_t ( 0x44 );
	inline auto integrity = std::uint32_t ( 0x13C );
	inline auto thickness = std::uint32_t ( 0x3C );
	inline auto traveledDistance = std::uint32_t ( 0x17C );
	inline auto traveledTime = std::uint32_t ( 0x180 );
}
```

## ProjectileWeaponMod

```cpp
namespace ProjectileWeaponMod
{
	inline auto isSilencer = std::uint32_t ( 0x218 );
	inline auto projectileVelocity = std::uint32_t ( 0x22C );
	inline auto silencerType = std::uint32_t ( 0x21C );
}
```

## RecoilProperties

```cpp
namespace RecoilProperties
{
	inline auto newRecoilOverride = std::uint32_t ( 0x80 );
	inline auto recoilPitchMax = std::uint32_t ( 0x24 );
	inline auto recoilPitchMin = std::uint32_t ( 0x20 );
	inline auto recoilYawMax = std::uint32_t ( 0x1C );
	inline auto recoilYawMin = std::uint32_t ( 0x18 );
}
```

## Rvas

```cpp
namespace Rvas
{
	inline auto TypeManagerInstance = std::uint32_t ( 0x221B020 );
	inline auto TypeToObjectSet = std::uint32_t ( 0x221AFF8 );
	inline auto m_Instance = std::uint32_t ( 0x217F8E8 );
	inline auto rigidActors = std::uint32_t ( 0x23D8 );
}
```

## ScientistNPC

```cpp
namespace ScientistNPC
{
	inline auto IdleChatterRepeatRange = std::uint32_t ( 0x880 );
	inline auto deathStatName = std::uint32_t ( 0x878 );
	inline auto radioChatterType = std::uint32_t ( 0x888 );
}
```

## ServerAdminUGCEntry - UI_ServerAdminUGCEntry

```cpp
namespace ServerAdminUGCEntry
{
	inline auto ReceivedDataFromServer = std::uint32_t ( 0x3092230 );
}
```

## SingletonComponentCameraMan - SingletonComponent`1

```cpp
namespace SingletonComponentCameraMan
{
	inline auto Instance = std::uint32_t ( 0x20 );
	inline auto TypeInfo = std::uint32_t ( 0x10C9E698 );
}
```

## SingletonComponentLoadingScreen - SingletonComponent`1

```cpp
namespace SingletonComponentLoadingScreen
{
	inline auto Instance = std::uint32_t ( 0x20 );
	inline auto TypeInfo = std::uint32_t ( 0x10CB2D70 );
}
```

## SingletonComponentMixerSnapshotManager - SingletonComponent`1

```cpp
namespace SingletonComponentMixerSnapshotManager
{
	inline auto Instance = std::uint32_t ( 0x20 );
	inline auto TypeInfo = std::uint32_t ( 0x10C5DA00 );
}
```

## SkeletonProperties

```cpp
namespace SkeletonProperties
{
	inline auto bones = std::uint32_t ( 0x20 );
}
```

## SkeletonPropertiesBoneProperty

```cpp
namespace SkeletonPropertiesBoneProperty
{
	inline auto area = std::uint32_t ( 0x20 );
	inline auto bone = std::uint32_t ( 0x10 );
	inline auto boneName = std::uint32_t ( 0x18 );
}
```

## SkinnedMultiMesh

```cpp
namespace SkinnedMultiMesh
{
	inline auto Renderers = std::uint32_t ( 0x40 );
}
```

## StringPool - %71137ea0ded4e0a0c736b91750a0704e2a0a692c

```cpp
namespace StringPool
{
	inline auto toNumber = std::uint32_t ( 0x60 );
}
```

## TodAmbientParameters

```cpp
namespace TodAmbientParameters
{
	inline auto Mode = std::uint32_t ( 0x10 );
	inline auto Saturation = std::uint32_t ( 0x14 );
	inline auto UpdateInterval = std::uint32_t ( 0x18 );
}
```

## TodAtmosphereParameters

```cpp
namespace TodAtmosphereParameters
{
	inline auto Brightness = std::uint32_t ( 0x18 );
	inline auto Contrast = std::uint32_t ( 0x1C );
	inline auto Directionality = std::uint32_t ( 0x28 );
	inline auto Fogginess = std::uint32_t ( 0x2C );
	inline auto MieMultiplier = std::uint32_t ( 0x14 );
	inline auto NightBrightness = std::uint32_t ( 0x20 );
	inline auto NightContrast = std::uint32_t ( 0x24 );
	inline auto RayleighMultiplier = std::uint32_t ( 0x10 );
}
```

## TodCloudParameters

```cpp
namespace TodCloudParameters
{
	inline auto Attenuation = std::uint32_t ( 0x24 );
	inline auto Brightness = std::uint32_t ( 0x30 );
	inline auto Coloring = std::uint32_t ( 0x20 );
	inline auto Coverage = std::uint32_t ( 0x18 );
	inline auto Opacity = std::uint32_t ( 0x14 );
	inline auto Saturation = std::uint32_t ( 0x28 );
	inline auto Scattering = std::uint32_t ( 0x2C );
	inline auto Sharpness = std::uint32_t ( 0x1C );
	inline auto Size = std::uint32_t ( 0x10 );
}
```

## TodDayParameters

```cpp
namespace TodDayParameters
{
	inline auto AmbientColor = std::uint32_t ( 0x40 );
	inline auto AmbientMultiplier = std::uint32_t ( 0x54 );
	inline auto CloudColor = std::uint32_t ( 0x30 );
	inline auto FogColor = std::uint32_t ( 0x38 );
	inline auto LightColor = std::uint32_t ( 0x18 );
	inline auto LightIntensity = std::uint32_t ( 0x48 );
	inline auto RayColor = std::uint32_t ( 0x20 );
	inline auto ReflectionMaxClamp = std::uint32_t ( 0x64 );
	inline auto ReflectionMultiplier = std::uint32_t ( 0x5C );
	inline auto ShadowStrength = std::uint32_t ( 0x50 );
	inline auto SkyColor = std::uint32_t ( 0x28 );
	inline auto SunColor = std::uint32_t ( 0x10 );
	inline auto runtimeAmbientMultiplier = std::uint32_t ( 0x58 );
	inline auto runtimeLightIntensity = std::uint32_t ( 0x4C );
	inline auto runtimeReflectionMultiplier = std::uint32_t ( 0x60 );
}
```

## TodFogParameters

```cpp
namespace TodFogParameters
{
	inline auto HeightBias = std::uint32_t ( 0x14 );
	inline auto Mode = std::uint32_t ( 0x10 );
}
```

## TodLightParameters

```cpp
namespace TodLightParameters
{
	inline auto MinimumHeight = std::uint32_t ( 0x14 );
	inline auto UpdateInterval = std::uint32_t ( 0x10 );
}
```

## TodMoonParameters

```cpp
namespace TodMoonParameters
{
	inline auto HaloBrightness = std::uint32_t ( 0x28 );
	inline auto HaloSize = std::uint32_t ( 0x24 );
	inline auto MeshBrightness = std::uint32_t ( 0x18 );
	inline auto MeshBrightnessDefault = std::uint32_t ( 0x1C );
	inline auto MeshContrast = std::uint32_t ( 0x20 );
	inline auto MeshSize = std::uint32_t ( 0x10 );
	inline auto MeshSizeRed = std::uint32_t ( 0x14 );
	inline auto Position = std::uint32_t ( 0x2C );
}
```

## TodNightParameters

```cpp
namespace TodNightParameters
{
	inline auto AmbientColor = std::uint32_t ( 0x48 );
	inline auto AmbientMultiplier = std::uint32_t ( 0x5C );
	inline auto CloudColor = std::uint32_t ( 0x38 );
	inline auto FogColor = std::uint32_t ( 0x40 );
	inline auto LightColor = std::uint32_t ( 0x20 );
	inline auto LightIntensity = std::uint32_t ( 0x50 );
	inline auto MoonColor = std::uint32_t ( 0x10 );
	inline auto MoonColorRed = std::uint32_t ( 0x18 );
	inline auto RayColor = std::uint32_t ( 0x28 );
	inline auto ReflectionMaxClamp = std::uint32_t ( 0x6C );
	inline auto ReflectionMultiplier = std::uint32_t ( 0x64 );
	inline auto ShadowStrength = std::uint32_t ( 0x58 );
	inline auto SkyColor = std::uint32_t ( 0x30 );
	inline auto runtimeAmbientMultiplier = std::uint32_t ( 0x60 );
	inline auto runtimeLightIntensity = std::uint32_t ( 0x54 );
	inline auto runtimeReflectionMultiplier = std::uint32_t ( 0x68 );
}
```

## TodSky

```cpp
namespace TodSky
{
	inline auto Ambient = std::uint32_t ( 0x98 );
	inline auto Atmosphere = std::uint32_t ( 0x50 );
	inline auto Clouds = std::uint32_t ( 0x80 );
	inline auto Day = std::uint32_t ( 0x58 );
	inline auto Fog = std::uint32_t ( 0x90 );
	inline auto Light = std::uint32_t ( 0x88 );
	inline auto Moon = std::uint32_t ( 0x70 );
	inline auto Night = std::uint32_t ( 0x60 );
	inline auto Stars = std::uint32_t ( 0x78 );
	inline auto Sun = std::uint32_t ( 0x68 );
}
```

## TodSkyStatic - %251288043bd15b0c9881d762a80c6dd24f215b9a

```cpp
namespace TodSkyStatic
{
	inline auto instances = std::uint32_t ( 0x50 );
}
```

## TodStarParameters

```cpp
namespace TodStarParameters
{
	inline auto Brightness = std::uint32_t ( 0x14 );
	inline auto ColorScale = std::uint32_t ( 0x1C );
	inline auto Position = std::uint32_t ( 0x18 );
	inline auto Size = std::uint32_t ( 0x10 );
}
```

## TodSunParameters

```cpp
namespace TodSunParameters
{
	inline auto MeshBrightness = std::uint32_t ( 0x14 );
	inline auto MeshBrightnessDefault = std::uint32_t ( 0x18 );
	inline auto MeshContrast = std::uint32_t ( 0x1C );
	inline auto MeshSize = std::uint32_t ( 0x10 );
}
```

## TranslatePhrase

```cpp
namespace TranslatePhrase
{
	inline auto legacyEnglish = std::uint32_t ( 0x20 );
	inline auto token = std::uint32_t ( 0x10 );
}
```

## TriggerLadder

```cpp
namespace TriggerLadder
{
	inline auto ForceLookAt = std::uint32_t ( 0x54 );
	inline auto RequireJumpToMount = std::uint32_t ( 0x55 );
	inline auto Type = std::uint32_t ( 0x50 );
}
```

## TriggerMovement

```cpp
namespace TriggerMovement
{
	inline auto losEyes = std::uint32_t ( 0x50 );
	inline auto movementModify = std::uint32_t ( 0x58 );
	inline auto scale = std::uint32_t ( 0x5C );
}
```

## UnityComponent

```cpp
namespace UnityComponent
{
	inline auto GetGameObject = std::uint32_t ( 0xBEA00 );
}
```

## UnityEngineUiText

```cpp
namespace UnityEngineUiText
{
	inline auto m_Text = std::uint32_t ( 0xE8 );
}
```

## UnityGameObject

```cpp
namespace UnityGameObject
{
	inline auto m_IsActive = std::uint32_t ( 0x46 );
}
```

## ViewModel

```cpp
namespace ViewModel
{
	inline auto instance = std::uint32_t ( 0x28 );
}
```

## ViewmodelBob

```cpp
namespace ViewmodelBob
{
	inline auto bobAmountRun = std::uint32_t ( 0x2C );
	inline auto bobAmountWalk = std::uint32_t ( 0x28 );
	inline auto bobSpeedRun = std::uint32_t ( 0x24 );
	inline auto bobSpeedWalk = std::uint32_t ( 0x20 );
	inline auto leftOffsetRun = std::uint32_t ( 0x30 );
}
```

## ViewmodelLower

```cpp
namespace ViewmodelLower
{
	inline auto forceLower = std::uint32_t ( 0x22 );
	inline auto lowerOnSprint = std::uint32_t ( 0x20 );
	inline auto lowerScale = std::uint32_t ( 0x24 );
	inline auto lowerWhenCantAttack = std::uint32_t ( 0x21 );
	inline auto shouldLower = std::uint32_t ( 0x28 );
}
```

## ViewmodelPunch

```cpp
namespace ViewmodelPunch
{
	inline auto punchDuration = std::uint32_t ( 0x34 );
	inline auto punchMagnitude = std::uint32_t ( 0x38 );
	inline auto punchStartTime = std::uint32_t ( 0x3C );
}
```

## ViewmodelSway

```cpp
namespace ViewmodelSway
{
	inline auto positionalSwayAmount = std::uint32_t ( 0x24 );
	inline auto positionalSwaySpeed = std::uint32_t ( 0x20 );
	inline auto rotateAmountTest = std::uint32_t ( 0x30 );
	inline auto rotationSwayAmount = std::uint32_t ( 0x2C );
	inline auto rotationSwaySpeed = std::uint32_t ( 0x28 );
}
```

## WorldItem

```cpp
namespace WorldItem
{
	inline auto Item = std::uint32_t ( 0x208 );
	inline auto allowPickup = std::uint32_t ( 0x200 );
}
```

## Decryption/Encryptions

```cpp
#include &lt;array&gt;
#include &lt;bit&gt;
#include &lt;cstdint&gt;
#include &lt;cstring&gt;

namespace Decryption
{
	namespace AttackEntity
	{
		inline auto decrypt_last_tick_time ( std::uint32_t value ) -&gt; float
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 1&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word = std::rotl ( word, 20 );
				word += 0x3ddd169au;
				word ^= 0x25392bf4u;
			}

			auto result = 0.00f;
			std::memcpy ( &amp;result, words.data ( ), sizeof ( result ) );

			return result;
		}

		inline auto decrypt_next_attack_time ( std::uint32_t value ) -&gt; float
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 1&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word = std::rotl ( word, 31 );
				word += 0xdf2b88f8u;
				word ^= 0x3419100eu;
			}

			auto result = 0.00f;
			std::memcpy ( &amp;result, words.data ( ), sizeof ( result ) );

			return result;
		}

		inline auto decrypt_next_tick_time ( std::uint32_t value ) -&gt; float
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 1&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word += 0xe9074665u;
				word = std::rotl ( word, 9 );
				word += 0xe9a8d91fu;
				word = std::rotl ( word, 14 );
			}

			auto result = 0.00f;
			std::memcpy ( &amp;result, words.data ( ), sizeof ( result ) );

			return result;
		}

		inline auto decrypt_time_since_deploy ( std::uint32_t value ) -&gt; float
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 1&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word ^= 0x1b10ea86u;
				word += 0x72007f22u;
				word = std::rotl ( word, 2 );
			}

			auto result = 0.00f;
			std::memcpy ( &amp;result, words.data ( ), sizeof ( result ) );

			return result;
		}

	}
	namespace BaseNetworkableStatic
	{
		inline auto decrypt_client_entities ( std::uint64_t value ) -&gt; std::uint64_t
		{
			const auto handle = memory-&gt;read&lt;std::uint64_t&gt; ( value + 0x18 );

			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 2&gt;&gt; ( handle );

			for ( auto&amp; word : words )
			{
				word = std::rotl ( word, 16 );
				word += 0x28668909u;
				word ^= 0xb67d1881u;
				word += 0x5ae7b7eeu;
			}

			return get_handle ( std::bit_cast&lt;std::uint64_t&gt; ( words ) );
		}

	}
	namespace BasePlayer
	{
		inline auto decrypt_clactiveitem ( std::uint64_t value ) -&gt; std::uint64_t
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 2&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word = std::rotl ( word, 9 );
				word += 0x7303defu;
				word ^= 0x4c1233d9u;
			}

			return std::bit_cast&lt;std::uint64_t&gt; ( words );
		}

		inline auto decrypt_eyes ( std::uint64_t value ) -&gt; std::uint64_t
		{
			const auto handle = memory-&gt;read&lt;std::uint64_t&gt; ( value + 0x18 );

			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 2&gt;&gt; ( handle );

			for ( auto&amp; word : words )
			{
				word += 0xcfe33070u;
				word = std::rotl ( word, 21 );
				word += 0x32be2d26u;
				word = std::rotl ( word, 22 );
			}

			return get_handle ( std::bit_cast&lt;std::uint64_t&gt; ( words ) );
		}

		inline auto decrypt_inventory ( std::uint64_t value ) -&gt; std::uint64_t
		{
			const auto handle = memory-&gt;read&lt;std::uint64_t&gt; ( value + 0x18 );

			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 2&gt;&gt; ( handle );

			for ( auto&amp; word : words )
			{
				word = std::rotl ( word, 23 );
				word += 0x5383cebbu;
				word = std::rotl ( word, 26 );
			}

			return get_handle ( std::bit_cast&lt;std::uint64_t&gt; ( words ) );
		}

		inline auto decrypt_lastsentticktime ( std::uint32_t value ) -&gt; float
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 1&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word += 0x6e866fffu;
				word ^= 0xc4e7e580u;
				word = std::rotl ( word, 27 );
			}

			auto result = 0.00f;
			std::memcpy ( &amp;result, words.data ( ), sizeof ( result ) );

			return result;
		}

		inline auto decrypt_user_id ( std::uint64_t value ) -&gt; std::uint64_t
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 2&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word ^= 0x93aa4414u;
				word = std::rotl ( word, 30 );
				word += 0x2f178b9bu;
				word = std::rotl ( word, 13 );
			}

			return std::bit_cast&lt;std::uint64_t&gt; ( words );
		}

	}
	namespace BaseProjectile
	{
		inline auto decrypt_next_reload_time ( std::uint32_t value ) -&gt; float
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 1&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word += 0x3cdba287u;
				word = std::rotl ( word, 15 );
				word += 0x6e1dbeb4u;
			}

			auto result = 0.00f;
			std::memcpy ( &amp;result, words.data ( ), sizeof ( result ) );

			return result;
		}

		inline auto decrypt_start_reload_time ( std::uint32_t value ) -&gt; float
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 1&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word = std::rotl ( word, 28 );
				word += 0xc2e4cec0u;
				word ^= 0x7d1892bu;
			}

			auto result = 0.00f;
			std::memcpy ( &amp;result, words.data ( ), sizeof ( result ) );

			return result;
		}

	}
	namespace ConvarGraphicsStatic
	{
		inline auto decrypt_fov ( std::uint32_t value ) -&gt; float
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 1&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word = std::rotl ( word, 1 );
				word ^= 0xc1c82bdcu;
				word = std::rotl ( word, 5 );
			}

			auto result = 0.00f;
			std::memcpy ( &amp;result, words.data ( ), sizeof ( result ) );

			return result;
		}

		inline auto encrypt_fov ( float value ) -&gt; std::uint32_t
		{
			auto result = std::uint32_t ( );
			std::memcpy ( &amp;result, &amp;value, sizeof ( result ) );

			result = std::rotl ( result, 27 );
			result ^= 0xc1c82bdcu;
			result = std::rotl ( result, 31 );

			return result;
		}

	}
	namespace ConvarPlayerStatic
	{
		inline auto decrypt_client_tick_interval ( std::uint32_t value ) -&gt; float
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 1&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word = std::rotl ( word, 1 );
				word ^= 0xc1c82bdcu;
				word = std::rotl ( word, 5 );
			}

			auto result = 0.00f;
			std::memcpy ( &amp;result, words.data ( ), sizeof ( result ) );

			return result;
		}

		inline auto encrypt_client_tick_interval ( float value ) -&gt; std::uint32_t
		{
			auto result = std::uint32_t ( );
			std::memcpy ( &amp;result, &amp;value, sizeof ( result ) );

			result = std::rotl ( result, 27 );
			result ^= 0xc1c82bdcu;
			result = std::rotl ( result, 31 );

			return result;
		}

	}
	namespace EntityRealm
	{
		inline auto decrypt_entity_list ( std::uint64_t value ) -&gt; std::uint64_t
		{
			const auto handle = memory-&gt;read&lt;std::uint64_t&gt; ( value + 0x18 );

			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 2&gt;&gt; ( handle );

			for ( auto&amp; word : words )
			{
				word = std::rotl ( word, 11 );
				word += 0x5212012cu;
				word = std::rotl ( word, 18 );
			}

			return get_handle ( std::bit_cast&lt;std::uint64_t&gt; ( words ) );
		}

	}
	namespace LocalPlayerStatic
	{
		inline auto decrypt_localplayer ( std::uint64_t value ) -&gt; std::uint64_t
		{
			const auto handle = memory-&gt;read&lt;std::uint64_t&gt; ( value + 0x18 );

			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 2&gt;&gt; ( handle );

			for ( auto&amp; word : words )
			{
				word = std::rotl ( word, 16 );
				word += 0x28668909u;
				word ^= 0xb67d1881u;
				word += 0x5ae7b7eeu;
			}

			return get_handle ( std::bit_cast&lt;std::uint64_t&gt; ( words ) );
		}

	}
	namespace PlayerEyes
	{
		inline auto decrypt_viewoffset ( std::array&lt;std::uint32_t, 3&gt; value ) -&gt; std::array&lt;std::uint32_t, 3&gt;
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word = std::rotl ( word, 26 );
				word += 0xe4ac37b2u;
				word = std::rotl ( word, 10 );
			}

			return std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( words );
		}

		inline auto encrypt_viewoffset ( std::array&lt;std::uint32_t, 3&gt; value ) -&gt; std::array&lt;std::uint32_t, 3&gt;
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word = std::rotl ( word, 22 );
				word += 0x1b53c84eu;
				word = std::rotl ( word, 6 );
			}

			return std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( words );
		}

	}
	namespace PlayerWalkMovement
	{
		inline auto decrypt_ground_angle ( std::uint32_t value ) -&gt; float
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 1&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word += 0x5a05c59bu;
				word = std::rotl ( word, 31 );
				word += 0x54aa52f7u;
			}

			auto result = 0.00f;
			std::memcpy ( &amp;result, words.data ( ), sizeof ( result ) );

			return result;
		}

		inline auto decrypt_ground_angle_new ( std::uint32_t value ) -&gt; float
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 1&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word = std::rotl ( word, 20 );
				word ^= 0x3713a5e4u;
				word = std::rotl ( word, 24 );
				word += 0x286ffe33u;
			}

			auto result = 0.00f;
			std::memcpy ( &amp;result, words.data ( ), sizeof ( result ) );

			return result;
		}

		inline auto decrypt_ground_normal ( std::array&lt;std::uint32_t, 3&gt; value ) -&gt; std::array&lt;std::uint32_t, 3&gt;
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word = std::rotl ( word, 13 );
				word ^= 0x85d90d28u;
				word = std::rotl ( word, 28 );
			}

			return std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( words );
		}

		inline auto decrypt_ground_normal_new ( std::array&lt;std::uint32_t, 3&gt; value ) -&gt; std::array&lt;std::uint32_t, 3&gt;
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word = std::rotl ( word, 1 );
				word ^= 0xc1c82bdcu;
				word = std::rotl ( word, 5 );
			}

			return std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( words );
		}

		inline auto decrypt_ground_time ( std::uint32_t value ) -&gt; float
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 1&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word += 0x992761f7u;
				word = std::rotl ( word, 18 );
				word ^= 0x21e0c095u;
				word += 0xd9474da9u;
			}

			auto result = 0.00f;
			std::memcpy ( &amp;result, words.data ( ), sizeof ( result ) );

			return result;
		}

		inline auto decrypt_ground_velocity ( std::array&lt;std::uint32_t, 3&gt; value ) -&gt; std::array&lt;std::uint32_t, 3&gt;
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word += 0x8261010bu;
				word ^= 0x9e4267b3u;
				word += 0x70c51826u;
			}

			return std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( words );
		}

		inline auto decrypt_ground_velocity_new ( std::array&lt;std::uint32_t, 3&gt; value ) -&gt; std::array&lt;std::uint32_t, 3&gt;
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word += 0x94e432f4u;
				word = std::rotl ( word, 18 );
				word += 0xbb997a10u;
				word = std::rotl ( word, 27 );
			}

			return std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( words );
		}

		inline auto decrypt_jump_time ( std::uint32_t value ) -&gt; float
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 1&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word += 0xdbb53067u;
				word = std::rotl ( word, 18 );
				word ^= 0x109c5f71u;
			}

			auto result = 0.00f;
			std::memcpy ( &amp;result, words.data ( ), sizeof ( result ) );

			return result;
		}

		inline auto decrypt_land_time ( std::uint32_t value ) -&gt; float
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 1&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word += 0x5be25f87u;
				word = std::rotl ( word, 24 );
				word += 0x718eb05du;
			}

			auto result = 0.00f;
			std::memcpy ( &amp;result, words.data ( ), sizeof ( result ) );

			return result;
		}

		inline auto decrypt_max_velocity ( std::uint32_t value ) -&gt; float
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 1&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word ^= 0x4b91a5d7u;
				word = std::rotl ( word, 4 );
				word ^= 0x45746401u;
				word = std::rotl ( word, 1 );
			}

			auto result = 0.00f;
			std::memcpy ( &amp;result, words.data ( ), sizeof ( result ) );

			return result;
		}

		inline auto decrypt_previous_inherited_velocity ( std::array&lt;std::uint32_t, 3&gt; value ) -&gt; std::array&lt;std::uint32_t, 3&gt;
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word = std::rotl ( word, 28 );
				word += 0xc2e4cec0u;
				word ^= 0x7d18923u;
			}

			return std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( words );
		}

		inline auto decrypt_previous_position ( std::array&lt;std::uint32_t, 3&gt; value ) -&gt; std::array&lt;std::uint32_t, 3&gt;
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word += 0xa068cf08u;
				word = std::rotl ( word, 30 );
				word ^= 0x85b5133cu;
				word = std::rotl ( word, 26 );
			}

			return std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( words );
		}

		inline auto decrypt_previous_velocity ( std::array&lt;std::uint32_t, 3&gt; value ) -&gt; std::array&lt;std::uint32_t, 3&gt;
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word += 0x3cdba28fu;
				word = std::rotl ( word, 15 );
				word += 0x6e1dbeb4u;
			}

			return std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( words );
		}

		inline auto encrypt_ground_angle ( float value ) -&gt; std::uint32_t
		{
			auto result = std::uint32_t ( );
			std::memcpy ( &amp;result, &amp;value, sizeof ( result ) );

			result += 0xab55ad09u;
			result = std::rotl ( result, 1 );
			result += 0xa5fa3a65u;

			return result;
		}

		inline auto encrypt_ground_angle_new ( float value ) -&gt; std::uint32_t
		{
			auto result = std::uint32_t ( );
			std::memcpy ( &amp;result, &amp;value, sizeof ( result ) );

			result += 0xd79001cdu;
			result = std::rotl ( result, 8 );
			result ^= 0x3713a5e4u;
			result = std::rotl ( result, 12 );

			return result;
		}

		inline auto encrypt_ground_normal ( std::array&lt;std::uint32_t, 3&gt; value ) -&gt; std::array&lt;std::uint32_t, 3&gt;
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word = std::rotl ( word, 4 );
				word ^= 0x85d90d28u;
				word = std::rotl ( word, 19 );
			}

			return std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( words );
		}

		inline auto encrypt_ground_normal_new ( std::array&lt;std::uint32_t, 3&gt; value ) -&gt; std::array&lt;std::uint32_t, 3&gt;
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word = std::rotl ( word, 27 );
				word ^= 0xc1c82bdcu;
				word = std::rotl ( word, 31 );
			}

			return std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( words );
		}

		inline auto encrypt_ground_time ( float value ) -&gt; std::uint32_t
		{
			auto result = std::uint32_t ( );
			std::memcpy ( &amp;result, &amp;value, sizeof ( result ) );

			result += 0x26b8b257u;
			result ^= 0x21e0c095u;
			result = std::rotl ( result, 14 );
			result += 0x66d89e09u;

			return result;
		}

		inline auto encrypt_ground_velocity ( std::array&lt;std::uint32_t, 3&gt; value ) -&gt; std::array&lt;std::uint32_t, 3&gt;
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word += 0x8f3ae7dau;
				word ^= 0x9e4267b3u;
				word += 0x7d9efef5u;
			}

			return std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( words );
		}

		inline auto encrypt_ground_velocity_new ( std::array&lt;std::uint32_t, 3&gt; value ) -&gt; std::array&lt;std::uint32_t, 3&gt;
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word = std::rotl ( word, 5 );
				word += 0x446685f0u;
				word = std::rotl ( word, 14 );
				word += 0x6b1bcd0cu;
			}

			return std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( words );
		}

		inline auto encrypt_jump_time ( float value ) -&gt; std::uint32_t
		{
			auto result = std::uint32_t ( );
			std::memcpy ( &amp;result, &amp;value, sizeof ( result ) );

			result ^= 0x109c5f71u;
			result = std::rotl ( result, 14 );
			result += 0x244acf99u;

			return result;
		}

		inline auto encrypt_land_time ( float value ) -&gt; std::uint32_t
		{
			auto result = std::uint32_t ( );
			std::memcpy ( &amp;result, &amp;value, sizeof ( result ) );

			result += 0x8e714fa3u;
			result = std::rotl ( result, 8 );
			result += 0xa41da079u;

			return result;
		}

		inline auto encrypt_max_velocity ( float value ) -&gt; std::uint32_t
		{
			auto result = std::uint32_t ( );
			std::memcpy ( &amp;result, &amp;value, sizeof ( result ) );

			result = std::rotl ( result, 31 );
			result ^= 0x45746401u;
			result = std::rotl ( result, 28 );
			result ^= 0x4b91a5d7u;

			return result;
		}

		inline auto encrypt_previous_inherited_velocity ( std::array&lt;std::uint32_t, 3&gt; value ) -&gt; std::array&lt;std::uint32_t, 3&gt;
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word ^= 0x7d18923u;
				word += 0x3d1b3140u;
				word = std::rotl ( word, 4 );
			}

			return std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( words );
		}

		inline auto encrypt_previous_position ( std::array&lt;std::uint32_t, 3&gt; value ) -&gt; std::array&lt;std::uint32_t, 3&gt;
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word = std::rotl ( word, 6 );
				word ^= 0x85b5133cu;
				word = std::rotl ( word, 2 );
				word += 0x5f9730f8u;
			}

			return std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( words );
		}

		inline auto encrypt_previous_velocity ( std::array&lt;std::uint32_t, 3&gt; value ) -&gt; std::array&lt;std::uint32_t, 3&gt;
		{
			auto words = std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( value );

			for ( auto&amp; word : words )
			{
				word += 0x91e2414cu;
				word = std::rotl ( word, 17 );
				word += 0xc3245d71u;
			}

			return std::bit_cast&lt;std::array&lt;std::uint32_t, 3&gt;&gt; ( words );
		}

	}
}
```
