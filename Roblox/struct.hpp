#pragma once
#include <cstdint>
#include <string>
namespace Structs {
    inline std::string ClientVersion = "version-02c37bc51a384b8f";

    struct AirProperties {
        char pad_0[0x18];
        float AirDensity; // 0x18
        char pad_1[0x20];
        Vector3 GlobalWind; // 0x3c
    }; // sizeof = 48

    struct AnimationTrack {
        char pad_0[0xa8];
        uintptr_t Animation; // 0xa8
        char pad_1[0x14];
        float Speed; // 0xc4
        float TimePosition; // 0xc8
        char pad_2[0x9];
        bool Looped; // 0xd5
        char pad_3[0x2a];
        uintptr_t Animator; // 0x100
        char pad_4[0x940];
        bool IsPlaying; // 0xa48
    }; // sizeof = a49

    struct Animator {
        char pad_0[0xa80];
        uintptr_t ActiveAnimations; // 0xa80
    }; // sizeof = a88

    struct Atmosphere {
        char pad_0[0xa8];
        Color3 Color; // 0xa8
        char pad_1[0xc];
        Color3 Decay; // 0xb4
        char pad_2[0xc];
        float Density; // 0xc0
        float Glare; // 0xc4
        float Haze; // 0xc8
        float Offset; // 0xcc
    }; // sizeof = d0

    struct Attachment {
        char pad_0[0xb4];
        Vector3 Position; // 0xb4
    }; // sizeof = c0

    struct BasePart {
        char pad_0[0xfc];
        float Reflectance; // 0xfc
        char pad_1[0x20];
        float Transparency; // 0x120
        char pad_2[0x1];
        bool CastShadow; // 0x125
        bool Locked; // 0x126
        bool Massless; // 0x127
        char pad_3[0x50];
        uintptr_t Primitive; // 0x178
        char pad_4[0x18];
        unsigned char Color3; // 0x198
        char pad_5[0x10];
        int Shape; // 0x1a8
    }; // sizeof = 1ac

    struct Beam {
        char pad_0[0x130];
        string Texture; // 0x130
        char pad_1[0x20];
        uintptr_t Attachment0; // 0x150
        char pad_2[0x8];
        uintptr_t Attachment1; // 0x160
        char pad_3[0x8];
        float Brightness; // 0x170
        float CurveSize0; // 0x174
        float CurveSize1; // 0x178
        float LightEmission; // 0x17c
        float LightInfluence; // 0x180
        char pad_4[0x8];
        float TextureLength; // 0x18c
        char pad_5[0x4];
        float TextureSpeed; // 0x194
        float Width0; // 0x198
        float Width1; // 0x19c
        float ZOffset; // 0x1a0
    }; // sizeof = 1a4

    struct BloomEffect {
        char pad_0[0xa0];
        bool Enabled; // 0xa0
        char pad_1[0x7];
        float Intensity; // 0xa8
        float Size; // 0xac
        float Threshold; // 0xb0
    }; // sizeof = b4

    struct BlurEffect {
        char pad_0[0xa0];
        bool Enabled; // 0xa0
        char pad_1[0x7];
        float Size; // 0xa8
    }; // sizeof = ac

    struct ByteCode {
        char pad_0[0x10];
        uintptr_t Pointer; // 0x10
        char pad_1[0x10];
        uintptr_t Size; // 0x28
    }; // sizeof = 30

    struct CachedItem {
        char pad_0[0x40];
        unknown FileMeshData; // 0x40
    }; // sizeof = 40

    struct Camera {
        char pad_0[0xb8];
        uintptr_t CameraSubject; // 0xb8
        char pad_1[0x8];
        Matrix3x3 Rotation; // 0xc8
        Vector3 Position; // 0xec
        char pad_2[0x30];
        int CameraType; // 0x128
        char pad_3[0x4];
        float FieldOfView; // 0x130
        char pad_4[0x148];
        short Viewport; // 0x27c
        char pad_5[0x40];
        Vector2 ViewportSize; // 0x2bc
        float ImagePlaneDepth; // 0x2c4
    }; // sizeof = 2c8

    struct CharacterMesh {
        char pad_0[0xb8];
        string BaseTextureId; // 0xb8
        char pad_1[0x30];
        string MeshId; // 0xe8
        char pad_2[0x30];
        string OverlayTextureId; // 0x118
        char pad_3[0x20];
        int BodyPart; // 0x138
    }; // sizeof = 13c

    struct ClickDetector {
        char pad_0[0xb8];
        string MouseIcon; // 0xb8
        char pad_1[0x20];
        float MaxActivationDistance; // 0xd8
    }; // sizeof = dc

    struct Clothing {
        char pad_0[0xf0];
        string Template; // 0xf0
        char pad_1[0x20];
        Color3 Color3; // 0x110
    }; // sizeof = 110

    struct ColorCorrectionEffect {
        char pad_0[0xa0];
        bool Enabled; // 0xa0
        char pad_1[0x7];
        Color3 TintColor; // 0xa8
        char pad_2[0xc];
        float Brightness; // 0xb4
        float Contrast; // 0xb8
    }; // sizeof = bc

    struct ColorGradingEffect {
        char pad_0[0xa0];
        bool Enabled; // 0xa0
        char pad_1[0x7];
        int TonemapperPreset; // 0xa8
    }; // sizeof = ac

    struct DataModel {
        char pad_0[0x8];
        uintptr_t ToRenderView2; // 0x8
        char pad_1[0x18];
        uintptr_t ToRenderView3; // 0x28
        char pad_2[0xe0];
        string JobId; // 0x110
        char pad_3[0x40];
        uintptr_t Workspace; // 0x150
        char pad_4[0x20];
        uintptr_t CreatorId; // 0x178
        uintptr_t GameId; // 0x180
        uintptr_t PlaceId; // 0x188
        char pad_5[0x14];
        int PlaceVersion; // 0x1a4
        char pad_6[0x18];
        uintptr_t ToRenderView1; // 0x1c0
        char pad_7[0x250];
        int PrimitiveCount; // 0x418
        char pad_8[0x24];
        uintptr_t ScriptContext; // 0x440
        char pad_9[0x170];
        string ServerIP; // 0x5b8
        char pad_10[0x18];
        uintptr_t GameLoaded; // 0x5d0
    }; // sizeof = 5d8

    struct DepthOfFieldEffect {
        char pad_0[0xa0];
        bool Enabled; // 0xa0
        char pad_1[0x7];
        float FarIntensity; // 0xa8
        float FocusDistance; // 0xac
        float InFocusRadius; // 0xb0
        float NearIntensity; // 0xb4
    }; // sizeof = b8

    struct DragDetector {
        char pad_0[0xb8];
        string CursorIcon; // 0xb8
        char pad_1[0x20];
        float MaxActivationDistance; // 0xd8
        char pad_2[0xd4];
        string ActivatedCursorIcon; // 0x1b0
        char pad_3[0x30];
        uintptr_t ReferenceInstance; // 0x1e0
        char pad_4[0x74];
        Vector3 MaxDragTranslation; // 0x25c
        Vector3 MinDragTranslation; // 0x268
        char pad_5[0x24];
        float MaxDragAngle; // 0x298
        float MaxForce; // 0x29c
        float MaxTorque; // 0x2a0
        float MinDragAngle; // 0x2a4
        char pad_6[0x8];
        float Responsiveness; // 0x2b0
    }; // sizeof = 2b4

    struct FakeDataModel {
        char pad_0[0x1f8];
        uintptr_t RealDataModel; // 0x1f8
        char pad_1[0x8b54780];
        uintptr_t Pointer; // 0x8b54980
    }; // sizeof = 8b54988

    struct FileMeshData {
        unknown Vertices; // 0x0
        char pad_0[0x8];
        unknown VerticesEnd; // 0x8
        char pad_1[0x28];
        unknown Faces; // 0x30
        char pad_2[0x8];
        unknown FacesEnd; // 0x38
        char pad_3[0x148];
        unknown AABBMin; // 0x180
        char pad_4[0xc];
        unknown AABBMax; // 0x18c
    }; // sizeof = 18c

    struct GuiBase2D {
        float AbsoluteSize; // 0x0
        char pad_0[0xd4];
        float AbsoluteRotation; // 0xd8
        char pad_1[0x20];
        float AbsolutePosition; // 0xfc
    }; // sizeof = 100

    struct GuiObject {
        char pad_0[0xd8];
        float Rotation; // 0xd8
        char pad_1[0x3d8];
        bool ScreenGui_Enabled; // 0x4b4
        char pad_2[0x4b];
        UDim2 Position; // 0x500
        char pad_3[0x10];
        UDim2 Size; // 0x520
        Color3 BackgroundColor3; // 0x530
        char pad_4[0xc];
        Color3 BorderColor3; // 0x53c
        float BackgroundTransparency; // 0x53c
        char pad_5[0x2c];
        int LayoutOrder; // 0x56c
        char pad_6[0x24];
        int ZIndex; // 0x594
        char pad_7[0x5];
        bool Visible; // 0x59d
        char pad_8[0x3f2];
        string Image; // 0x990
        char pad_9[0x1f8];
        string RichText; // 0xb88
        char pad_10[0x268];
        string Text; // 0xdf0
        char pad_11[0xb0];
        Color3 TextColor3; // 0xea0
    }; // sizeof = ea0

    struct Humanoid {
        double WalkTimer; // 0x0
        char pad_0[0x18];
        int HumanoidStateID; // 0x20
        char pad_1[0x84];
        string DisplayName; // 0xa8
        char pad_2[0x50];
        uintptr_t SeatPart; // 0xf8
        char pad_3[0x8];
        uintptr_t MoveToPart; // 0x108
        char pad_4[0x8];
        Vector3 CameraOffset; // 0x118
        char pad_5[0xc];
        Vector3 MoveDirection; // 0x130
        Vector3 TargetPoint; // 0x13c
        char pad_6[0xc];
        Vector3 MoveToPoint; // 0x154
        char pad_7[0x10];
        int DisplayDistanceType; // 0x170
        int FloorMaterial; // 0x174
        float HealthDisplayDistance; // 0x178
        int HealthDisplayType; // 0x17c
        float Health; // 0x180
        float HipHeight; // 0x184
        char pad_8[0x8];
        float JumpHeight; // 0x190
        float JumpPower; // 0x194
        float MaxHealth; // 0x198
        float MaxSlopeAngle; // 0x19c
        float NameDisplayDistance; // 0x1a0
        int NameOcclusion; // 0x1a4
        char pad_9[0x8];
        int RigType; // 0x1b0
        char pad_10[0xc];
        float Walkspeed; // 0x1c0
        bool AutoJumpEnabled; // 0x1c4
        bool AutoRotate; // 0x1c5
        bool AutomaticScalingEnabled; // 0x1c6
        bool BreakJointsOnDeath; // 0x1c7
        bool EvaluateStateMachine; // 0x1c8
        char pad_11[0x1];
        bool Jump; // 0x1ca
        char pad_12[0x1];
        bool PlatformStand; // 0x1cc
        bool Sit; // 0x1cd
        bool RequiresNeck; // 0x1cd
        char pad_13[0x1];
        bool UseJumpPower; // 0x1d0
        char pad_14[0x1cb];
        float WalkspeedCheck; // 0x39c
        char pad_15[0xb8];
        uintptr_t HumanoidRootPart; // 0x458
        char pad_16[0x440];
        int HumanoidState; // 0x8a0
        char pad_17[0x17b];
        bool IsWalking; // 0xa1f
    }; // sizeof = a20

    struct Instance {
        char pad_0[0x8];
        uintptr_t This; // 0x8
        uintptr_t Name; // 0x8
        uintptr_t ChildrenEnd; // 0x8
        string ClassName; // 0x8
        uintptr_t ClassDescriptor; // 0x18
        char pad_1[0x40];
        uintptr_t Parent; // 0x68
        uintptr_t NameContainer; // 0x70
        uintptr_t ChildrenStart; // 0x78
        char pad_2[0x130];
        uintptr_t ClassBase; // 0x1b0
    }; // sizeof = 1b8

    struct LRUHolder {
        char pad_0[0x20];
        unknown MemEnforcedLRUCache; // 0x20
    }; // sizeof = 20

    struct LRUNode {
        unknown Next; // 0x0
        char pad_0[0x10];
        unknown AssetID; // 0x10
        char pad_1[0x30];
        unknown CachedItem; // 0x40
    }; // sizeof = 40

    struct Lighting {
        char pad_0[0xb8];
        float ClockTime; // 0xb8
        char pad_1[0x4];
        Color3 Ambient; // 0xc0
        char pad_2[0xc];
        Color3 ColorShift_Top; // 0xcc
        char pad_3[0xc];
        Color3 ColorShift_Bottom; // 0xd8
        char pad_4[0xc];
        Color3 FogColor; // 0xe4
        char pad_5[0xc];
        Color3 OutdoorAmbient; // 0xf0
        char pad_6[0x18];
        float Brightness; // 0x108
        float EnvironmentDiffuseScale; // 0x10c
        float EnvironmentSpecularScale; // 0x110
        float ExposureCompensation; // 0x114
        char pad_7[0x4];
        float FogEnd; // 0x11c
        float FogStart; // 0x120
        float GeographicLatitude; // 0x124
        char pad_8[0xc];
        bool GlobalShadows; // 0x134
        char pad_9[0xb];
        Color3 GradientTop; // 0x140
        char pad_10[0xc];
        Color3 LightColor; // 0x14c
        char pad_11[0xc];
        Vector3 LightDirection; // 0x158
        int Source; // 0x164
        Vector3 SunPosition; // 0x168
        Vector3 MoonPosition; // 0x174
        Color3 GradientBottom; // 0x180
        char pad_12[0x38];
        uintptr_t Sky; // 0x1b8
    }; // sizeof = 1c0

    struct LocalScript {
        uintptr_t ByteCode; // 0x0
        char pad_0[0xb8];
        string GUID; // 0xc0
        char pad_1[0xd0];
        string Hash; // 0x190
    }; // sizeof = 190

    struct MaterialColors {
        char pad_0[0x6];
        ColorUint_8 Grass; // 0x6
        char pad_1[0x3];
        ColorUint_8 Slate; // 0x9
        char pad_2[0x3];
        ColorUint_8 Concrete; // 0xc
        char pad_3[0x3];
        ColorUint_8 Brick; // 0xf
        char pad_4[0x3];
        ColorUint_8 Sand; // 0x12
        char pad_5[0x3];
        ColorUint_8 WoodPlanks; // 0x15
        char pad_6[0x3];
        ColorUint_8 Rock; // 0x18
        char pad_7[0x3];
        ColorUint_8 Glacier; // 0x1b
        char pad_8[0x3];
        ColorUint_8 Snow; // 0x1e
        char pad_9[0x3];
        ColorUint_8 Sandstone; // 0x21
        char pad_10[0x3];
        ColorUint_8 Mud; // 0x24
        char pad_11[0x3];
        ColorUint_8 Basalt; // 0x27
        char pad_12[0x3];
        ColorUint_8 Ground; // 0x2a
        char pad_13[0x3];
        ColorUint_8 CrackedLava; // 0x2d
        char pad_14[0x3];
        ColorUint_8 Asphalt; // 0x30
        char pad_15[0x3];
        ColorUint_8 Cobblestone; // 0x33
        char pad_16[0x3];
        ColorUint_8 Ice; // 0x36
        char pad_17[0x3];
        ColorUint_8 LeafyGrass; // 0x39
        char pad_18[0x3];
        ColorUint_8 Salt; // 0x3c
        char pad_19[0x3];
        ColorUint_8 Limestone; // 0x3f
        char pad_20[0x3];
        ColorUint_8 Pavement; // 0x42
    }; // sizeof = 42

    struct MemEnforcedLRUCache {
        char pad_0[0x8];
        unknown Head; // 0x8
    }; // sizeof = 8

    struct MeshContentProvider {
        char pad_0[0xc8];
        unknown LRUHolder; // 0xc8
    }; // sizeof = c8

    struct MeshPart {
        char pad_0[0x300];
        string MeshId; // 0x300
        char pad_1[0x30];
        string Texture; // 0x330
    }; // sizeof = 330

    struct Misc {
        char pad_0[0x10];
        int StringLength; // 0x10
        char pad_1[0x94];
        string Value; // 0xa8
        char pad_2[0x8];
        string AnimationId; // 0xb0
        char pad_3[0x30];
        uintptr_t Adornee; // 0xe0
    }; // sizeof = e8

    struct Model {
        char pad_0[0x134];
        float Scale; // 0x134
        char pad_1[0x110];
        uintptr_t PrimaryPart; // 0x248
    }; // sizeof = 250

    struct ModuleScript {
        unknown IsCoreScript; // 0x0
        uintptr_t ByteCode; // 0x0
        char pad_0[0xb8];
        string GUID; // 0xc0
        char pad_1[0x290];
        string Hash; // 0x350
    }; // sizeof = 350

    struct MouseService {
        float SensitivityPointer; // 0x0
        char pad_0[0xc0];
        Vector2 MousePosition; // 0xc4
        char pad_1[0x14];
        uintptr_t InputObject; // 0xe0
        char pad_2[0x8];
        uintptr_t InputObject2; // 0xf0
    }; // sizeof = f8

    struct ParticleEmitter {
        char pad_0[0x1b0];
        string Texture; // 0x1b0
        char pad_1[0x20];
        Vector3 Acceleration; // 0x1d0
        char pad_2[0x8];
        Vector2 Lifetime; // 0x1e4
        float RotSpeed; // 0x1ec
        char pad_3[0x4];
        float Rotation; // 0x1f4
        char pad_4[0x4];
        float Speed; // 0x1fc
        char pad_5[0x4];
        Vector2 SpreadAngle; // 0x204
        float Brightness; // 0x20c
        float Drag; // 0x210
        char pad_6[0x14];
        float LightEmission; // 0x228
        float LightInfluence; // 0x22c
        char pad_7[0x8];
        float Rate; // 0x238
        char pad_8[0x10];
        float TimeScale; // 0x24c
        float VelocityInheritance; // 0x250
        float ZOffset; // 0x254
    }; // sizeof = 258

    struct Player {
        char pad_0[0xc0];
        uintptr_t UserId; // 0xc0
        char pad_1[0x40];
        string LocaleId; // 0x108
        char pad_2[0x18];
        uintptr_t LocalPlayer; // 0x120
        string DisplayName; // 0x128
        char pad_3[0x160];
        uintptr_t ModelInstance; // 0x288
        char pad_4[0x38];
        uintptr_t Team; // 0x2c8
        char pad_5[0x7c];
        int AccountAge; // 0x34c
        char pad_6[0x8];
        float MaxZoomDistance; // 0x358
        float MinZoomDistance; // 0x35c
        int CameraMode; // 0x360
        char pad_7[0x20];
        float HealthDisplayDistance; // 0x384
        char pad_8[0xc];
        float NameDisplayDistance; // 0x394
        char pad_9[0x8];
        int TeamColor; // 0x3a0
        char pad_10[0xe64];
        uintptr_t Mouse; // 0x1208
    }; // sizeof = 1210

    struct PlayerConfigurer {
        uintptr_t Pointer; // 0x0
    }; // sizeof = 8

    struct PlayerMouse {
        char pad_0[0xb8];
        string Icon; // 0xb8
        char pad_1[0x88];
        uintptr_t Workspace; // 0x140
    }; // sizeof = 148

    struct Primitive {
        int Material; // 0x0
        char pad_0[0x2];
        uintptr_t Validate; // 0x6
        char pad_1[0xa2];
        Matrix3x3 Rotation; // 0xb0
        Vector3 Position; // 0xd4
        Vector3 AssemblyLinearVelocity; // 0xe0
        Vector3 AssemblyAngularVelocity; // 0xec
        char pad_2[0xbe];
        BYTE Flags; // 0x1b6
        char pad_3[0x5];
        Vector3 Size; // 0x1bc
        char pad_4[0x48];
        uintptr_t Owner; // 0x210
    }; // sizeof = 218

    struct PrimitiveFlags {
        char pad_0[0x2];
        unknown Anchored; // 0x2
        char pad_1[0x6];
        unknown CanCollide; // 0x8
        char pad_2[0x8];
        unknown CanTouch; // 0x10
        char pad_3[0x10];
        unknown CanQuery; // 0x20
    }; // sizeof = 20

    struct ProximityPrompt {
        char pad_0[0xa0];
        string ActionText; // 0xa0
        char pad_1[0x20];
        string ObjectText; // 0xc0
        char pad_2[0x4c];
        int GamepadKeyCode; // 0x10c
        float HoldDuration; // 0x110
        int KeyCode; // 0x114
        float MaxActivationDistance; // 0x118
        char pad_3[0xa];
        bool Enabled; // 0x126
        bool RequiresLineOfSight; // 0x127
    }; // sizeof = 128

    struct RenderJob {
        char pad_0[0x38];
        uintptr_t FakeDataModel; // 0x38
        char pad_1[0x198];
        uintptr_t RenderView; // 0x1d8
        char pad_2[0x10];
        uintptr_t RealDataModel; // 0x1f0
    }; // sizeof = 1f8

    struct RenderView {
        bool LightingValid; // 0x0
        bool SkyValid; // 0x0
        uintptr_t VisualEngine; // 0x0
        uintptr_t DeviceD3D11; // 0x0
    }; // sizeof = 12

    struct RunService {
        char pad_0[0xc8];
        double HeartbeatFPS; // 0xc8
        char pad_1[0x10];
        uintptr_t HeartbeatTask; // 0xe0
    }; // sizeof = e8

    struct Script {
        uintptr_t ByteCode; // 0x0
        char pad_0[0xb8];
        string GUID; // 0xc0
        char pad_1[0xd0];
        string Hash; // 0x190
    }; // sizeof = 190

    struct ScriptContext {
        unknown RequireBypass; // 0x0
    }; // sizeof = 0

    struct Seat {
        char pad_0[0x208];
        uintptr_t Occupant; // 0x208
    }; // sizeof = 210

    struct Sky {
        char pad_0[0xb8];
        string MoonTextureId; // 0xb8
        char pad_1[0x30];
        string SkyboxBk; // 0xe8
        char pad_2[0x30];
        string SkyboxDn; // 0x118
        char pad_3[0x30];
        string SkyboxFt; // 0x148
        char pad_4[0x30];
        string SkyboxLf; // 0x178
        char pad_5[0x30];
        string SkyboxRt; // 0x1a8
        char pad_6[0x30];
        string SkyboxUp; // 0x1d8
        char pad_7[0x30];
        string SunTextureId; // 0x208
        char pad_8[0x20];
        Vector3 SkyboxOrientation; // 0x228
        float SunAngularSize; // 0x22c
        float MoonAngularSize; // 0x234
        int StarCount; // 0x238
    }; // sizeof = 240

    struct Sound {
        char pad_0[0xb8];
        string SoundId; // 0xb8
        char pad_1[0x20];
        uintptr_t SoundGroup; // 0xd8
        char pad_2[0x2c];
        float PlaybackSpeed; // 0x10c
        float RollOffMaxDistance; // 0x110
        float RollOffMinDistance; // 0x114
        char pad_3[0x8];
        float Volume; // 0x120
        char pad_4[0x9];
        bool Looped; // 0x12d
        char pad_5[0x2];
        bool IsPlaying; // 0x130
    }; // sizeof = 131

    struct SpawnLocation {
        char pad_0[0x3d];
        bool AllowTeamChangeOnTouch; // 0x3d
        char pad_1[0x19a];
        int ForcefieldDuration; // 0x1d8
        int TeamColor; // 0x1dc
        char pad_2[0x1];
        bool Enabled; // 0x1e1
        bool Neutral; // 0x1e2
    }; // sizeof = 1e3

    struct SpecialMesh {
        char pad_0[0xb4];
        Vector3 Scale; // 0xb4
        char pad_1[0x28];
        string MeshId; // 0xe8
    }; // sizeof = e8

    struct StatsItem {
        char pad_0[0x1259];
        double Value; // 0x1259
    }; // sizeof = 1261

    struct SunRaysEffect {
        char pad_0[0xa0];
        bool Enabled; // 0xa0
        char pad_1[0x7];
        float Intensity; // 0xa8
        float Spread; // 0xac
    }; // sizeof = b0

    struct SurfaceAppearance {
        char pad_0[0xb8];
        string ColorMap; // 0xb8
        char pad_1[0x30];
        string EmissiveMaskContent; // 0xe8
        char pad_2[0x30];
        string MetalnessMap; // 0x118
        char pad_3[0x30];
        string NormalMap; // 0x148
        char pad_4[0x30];
        string RoughnessMap; // 0x178
        char pad_5[0x50];
        Color3 Color; // 0x1c8
        char pad_6[0xc];
        Color3 EmissiveTint; // 0x1d4
        char pad_7[0xc];
        int AlphaMode; // 0x1e0
        float EmissiveStrength; // 0x1e4
    }; // sizeof = 1e8

    struct TaskScheduler {
        char pad_0[0x18];
        string JobName; // 0x18
        char pad_1[0x98];
        double MaxFPS; // 0xb0
        char pad_2[0x10];
        uintptr_t JobStart; // 0xc8
        uintptr_t JobEnd; // 0xd0
        char pad_3[0x8aff1c8];
        uintptr_t Pointer; // 0x8aff2a0
    }; // sizeof = 8aff2a8

    struct Team {
        char pad_0[0xa8];
        int BrickColor; // 0xa8
    }; // sizeof = ac

    struct Terrain {
        char pad_0[0x1d0];
        Color3 WaterColor; // 0x1d0
        char pad_1[0x10];
        float GrassLength; // 0x1e0
        char pad_2[0x4];
        float WaterReflectance; // 0x1e8
        float WaterTransparency; // 0x1ec
        float WaterWaveSize; // 0x1f0
        float WaterWaveSpeed; // 0x1f4
        char pad_3[0x2b0];
        uintptr_t MaterialColors; // 0x4a8
    }; // sizeof = 4b0

    struct Textures {
        char pad_0[0x1d0];
        string Decal_Texture; // 0x1d0
        string Texture_Texture; // 0x1d0
    }; // sizeof = 1d0

    struct Tool {
        char pad_0[0x350];
        string TextureId; // 0x350
        char pad_1[0x108];
        string Tooltip; // 0x458
        char pad_2[0x44];
        Vector3 Grip; // 0x49c
        bool CanBeDropped; // 0x4a8
        bool Enabled; // 0x4a9
        bool ManualActivationOnly; // 0x4aa
        bool RequiresHandle; // 0x4ab
    }; // sizeof = 4ac

    struct UnionOperation {
        char pad_0[0x300];
        string AssetId; // 0x300
    }; // sizeof = 300

    struct UserInputService {
        char pad_0[0x2b0];
        uintptr_t WindowInputState; // 0x2b0
    }; // sizeof = 2b8

    struct VehicleSeat {
        char pad_0[0x218];
        float MaxSpeed; // 0x218
        float SteerFloat; // 0x21c
        float ThrottleFloat; // 0x220
        float Torque; // 0x224
        float TurnSpeed; // 0x228
    }; // sizeof = 22c

    struct VisualEngine {
        char pad_0[0x1b0];
        ViewMatrix_t ViewMatrix; // 0x1b0
        char pad_1[0x900];
        uintptr_t FakeDataModel; // 0xaf0
        char pad_2[0x18];
        Vector2 Dimensions; // 0xb10
        char pad_3[0x118];
        unknown RenderView; // 0xc30
        char pad_4[0x858c5d8];
        uintptr_t Pointer; // 0x858d208
    }; // sizeof = 858d210

    struct Weld {
        char pad_0[0x108];
        uintptr_t Part0; // 0x108
        char pad_1[0x8];
        uintptr_t Part1; // 0x118
    }; // sizeof = 120

    struct WeldConstraint {
        char pad_0[0xa8];
        uintptr_t Part0; // 0xa8
        char pad_1[0x8];
        uintptr_t Part1; // 0xb8
    }; // sizeof = c0

    struct WindowInputState {
        char pad_0[0x40];
        bool CapsLock; // 0x40
        char pad_1[0x7];
        uintptr_t CurrentTextBox; // 0x48
    }; // sizeof = 50

    struct Workspace {
        char pad_0[0x400];
        uintptr_t World; // 0x400
        char pad_1[0xa0];
        uintptr_t CurrentCamera; // 0x4a8
        char pad_2[0x18];
        double DistributedGameTime; // 0x4c8
        char pad_3[0x4e8];
        float ReadOnlyGravity; // 0x9b8
    }; // sizeof = 9bc

    struct World {
        char pad_0[0x220];
        float FallenPartsDestroyHeight; // 0x220
        char pad_1[0x8];
        float Gravity; // 0x22c
        char pad_2[0x10];
        uintptr_t AirProperties; // 0x240
        char pad_3[0x68];
        unknown Primitives; // 0x2b0
        char pad_4[0x498];
        float worldStepsPerSec; // 0x748
    }; // sizeof = 74c

}
