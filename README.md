# Static Data Extraction

Use this DLL to extract an up-to-date copy of hero definitions and static data from Raid: Shadow Legends.
Used for [RaidExtractor](https://github.com/LukeCroteau/RaidExtractor).

## Building

* Clone the repository
```bash
git clone https://github.com/zerfl/StaticRaidExtraction.git
```
* Build using Visual Studio 2019

## Usage

* Run Raid: Shadow Legends
* Inject the compiled DLL into the Raid process. Either write your own injector or use any of the available ones, e.g.:
    * [GH Injector](https://guidedhacking.com/resources/guided-hacking-dll-injector.4/)
    * Xenos Injector
    * Extreme Injector
* A command prompt will open. It will say `done` when the extraction was successful. You may close the game now.
* `hero_types.json` and `static_data.json` files will have been generated inside the `PlariumPlay/<6.x.x-x.x.>/` folder.

## Updating the DLL

Almost all Raid: Shadow Legends updates require a full re-compilation of the DLL due to changing metadata and address locations.

* Clone and build [Il2CppInspector](https://github.com/djkaty/Il2CppInspector)
    * You **must** build it from source, the GitHub release is outdated.
    * Make sure to follow the `INSTALL` instructions and copy the `plugins` folder into the `Il2CppInspector.exe` directory.
* Run **Il2CppInspector** and select the `global-metadata.dat` file (usually found in `/Raid_Data/il2cpp_data/Metadata/`) as well as the `GameAssembly.dll` file when prompted.
* Select **C++ scaffolding / DLL injection project**, hit **Export** and select the folder where you cloned the project.
* Compile and inject.

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

