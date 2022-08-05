# Summer Project for GP21 

## Goal:

In the summer project I am interested in development of FPS and TPS shooting systems with blueprints and advanced locomotions. 

The project will be run server side and client side which gives the ability to play as a multiplayer. The reason for this approach is to extend my knowledge in the better understanding of Networking in the Unreal Engine environment.

### Side Goals :

The project will have features such as Inventory system, Battle behaviors and variety of interactions of classes. Also I believe that it would be a challenge to overcome and improve my knowledge on the mentioned topics.

Extra encounter topics

- Hand to hand Combat system
- AI development
- AI sensings
- Driveable objects (cars, guns)
- Mechanical behaviors (Guns, Machines)
- Hand To hand Combats
- Weapon upgrade system (Maybe)
- Particle system
- Animations
- Camera system
- Sequences

# Steam Multiplayer

With the Steam Multiplayer Pluggin that customly designed for Elite V the Project can be Play through steam sessions via Multiple Users, There some Configs that needs to be Modified for UE5.0.3 that I will update it in next step

- Make sure you get this part right. If you can't create sessions, come back to this and make sure your DefaultEngine.ini has these lines added to it.

```[/Script/Engine.GameEngine]
+NetDriverDefinitions=(DefName="GameNetDriver",DriverClassName="OnlineSubsystemSteam.SteamNetDriver",DriverClassNameFallback="OnlineSubsystemUtils.IpNetDriver")
 
[OnlineSubsystem]
DefaultPlatformService=Steam
 
[OnlineSubsystemSteam]
bEnabled=true
SteamDevAppId=480
bInitServerOnClient=true
 
[/Script/OnlineSubsystemSteam.SteamNetDriver]
NetConnectionClassName="OnlineSubsystemSteam.SteamNetConnection"
```


https://user-images.githubusercontent.com/50558401/183063913-51c53dc7-f191-4882-bba6-b2ecc45509ce.mp4


## Characters

The Game will provide verity of Characters than can be Battle with eachother, you can choose your Client side Character and It will be projected through the server and Its Customizable.

*** ONLY BASE CHARACTER EXIST AT THE MOMEMNT **

## Weapons:
Weapons are a different Class which they carry the actions they can equiped reload or dropped, the dropped weopons will carry the same of ammo class that it carries.
The weopon Class can be adjust and configure through the Fire Rate or Ammo Number Accuracy and Damage Range through the BP
- **Scoped Weapons :**
  Sniper Rifles or any scoped weapons are Chategorized here,
- *** Rifle : ***
- *** Pistol : ***
- *** Melee: ***
## Pickups :

