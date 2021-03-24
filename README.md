# Surveillance Escape

**Try the in-developing game [here](https://mizardblack.itch.io/surveillance-escape)!**
![Game Logo](./Documentation/dragon.png?raw=true "Game Logo")

## About This Project

A rogue-like escape game that is played by 2 or more users. One of them will play as the dragon, and the others will play as humans. The "human" players will need to collect keys in order to escape the dungeon. There will be two types of monsters that will prevent them from beating the game: a number of slimes that will be scared away by the loud noise made by the player; the one dragon that is played by another player which will be attracted by the noise that players make. To navigate the terrain and attack with noise, the players will use a specially made controller consist of a gyroscope sensor and a volume detector sensor.

## Getting Started

This repository only includes the `Assets` directory, so please be sure to follow the instruction below to setup your Unity before working on this project.

### Prerequisites

Use [Unity 2020.3.0](https://unity3d.com/get-unity/download/archive) or newer versions.

1. Open Unity Hub, then go to Installs panel and check if your current version is 2020.3.0 or newer.
2. If not, download and install [Unity 2020.3.0](https://unity3d.com/get-unity/download/archive) or newer versions on Unity Hub. **When installing, be sure to check the `WebGL Build Support`.** It will be used for building game.
   ![Unity Version](./Documentation/Unity_Version.png?raw=true "Unity Version")

### Using [Photon](https://www.photonengine.com/en-US/Photon) on Unity

1. Download and import [Photon PUN2](https://assetstore.unity.com/packages/tools/network/pun-2-free-119922) into your Unity porject.

2. In Unity menu bar, click _Window >> Photon Unity Networking >> PUN Wizard_, then in _Setting >> Setup Project_, paste in APPID

   > b97470c4-cde9-4af6-bd67-e662816d2a03

   or email adress

   > 15976134597@qq.com

3. You're all set! Download the `Assets` directory and move it to your Unity project. You can start co-working on this project.

_You can also follow the first half of [this tutorial](https://www.youtube.com/watch?v=nmPukdOsYQA&t=0s) to include Photon libriary in you Unity._

## Build Game as WebGL

This game uses Photon Engine for Networking, so the easist way to build the game is to build for WebGL and run in a browser.

1. In Unity menu bar, click _File >> Build Settings >> WebGL >> Code Optimization >> Size_.
   ![Build Settings](./Documentation/Build_Settings_1.png?raw=true "Build Settings")

2. On the same _Build Settings_ panel, open _Player Settings_ panel, setup as following:
   ![Player Settings](./Documentation/Build_Settings_2.png?raw=true "Player Settings")
   ![Player Settings](./Documentation/Build_Settings_3.png?raw=true "Player Settings")
3. Back in _Build Settings_ panel, click "Build", and save the built game in a folder on you pc.
4. After it builds successfully, you should see a _Build_ folder, an _index.html_ file, and a _TemplateData_ folder.
   ![Built Game Folder](./Documentation/Built_Game.png?raw=true "Built Game Folder")
5. Compress the built game folder and upload to a server hosting website, like [itch.io](https://itch.io) or [GitHub Pages](https://pages.github.com).

## Controller Assembly

Follow instructions on [this page](https://www.notion.so/designedbynicky/MPU6050-sound-sensor-Arduino-Leonardo-fde423e5daca46fc8e8c02bdddaa666e) to assemble the controller.
