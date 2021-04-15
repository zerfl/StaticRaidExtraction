// Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// Custom injected code entry point
#include "pch-il2cpp.h"


#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <iostream>
#include "il2cpp-appdata.h"
#include "helpers.h"
#include <nlohmann/json.hpp>
#include <fstream>

using namespace app;
using json = nlohmann::ordered_json;

// Set the name of your log file here
extern const LPCWSTR LOG_FILE = L"il2cpp-log.txt";
static const unsigned long long divisor = 2ULL << 31;

struct JsonHero {
    std::string Fraction;
    std::string Rarity;
    std::string Role;
    std::string Element;

    int AwakeLevel;
    bool IsAwakeSupported;
    bool IsAwakable;
    int AwakenHeroId;
    int Id;
    int BaseId;
    bool IsBaseType;
    bool IsBoss;
    bool IsChecked;
    bool IsLocationOnly;
    bool IsMaxAwakened;
    bool IsPreChecked;
    bool OnQuarantine;
    double SummonWeight;
    int UnAwakenHeroId;

    int Health;
    int Attack;
    int Defense;
    int Speed;
    int Resistance;
    int Accuracy;
    int CriticalChance;
    int CriticalDamage;
    int CriticalHeal;

    std::string AvatarName;
    std::string Name;
};

void to_json(json& j, const JsonHero& h) {
    j = json {
        { "fraction", h.Fraction },
        { "rarity", h.Rarity},
        { "role", h.Role },
        { "element", h.Element },
        { "awakeLevel", h.AwakeLevel },
        { "isAwakeSupported", h.IsAwakeSupported },
        { "isAwakable", h.IsAwakable },
        { "awakenHeroId", h.AwakenHeroId },
        { "id", h.Id },
        { "baseId", h.BaseId },
        { "isBaseType", h.IsBaseType },
        { "isBoss", h.IsBoss },
        { "isChecked", h.IsChecked },
        { "isLocationOnly", h.IsLocationOnly },
        { "isMaxAwakened", h.IsMaxAwakened },
        { "onQuarantine", h.OnQuarantine },
        { "summonWeight", h.SummonWeight },
        { "unAwakenHeroId", h.UnAwakenHeroId },
        { "health", h.Health },
        { "attack", h.Attack },
        { "defense", h.Defense },
        { "speed", h.Speed },
        { "resistance", h.Resistance },
        { "accuracy", h.Accuracy },
        { "criticalChance", h.CriticalChance },
        { "criticalDamage", h.CriticalDamage },
        { "criticalHeal", h.CriticalHeal },

        { "name", h.Name },
        { "avatarName", h.AvatarName },
    };
}

const std::map<int, std::string> elementLookup = {
    {1, "Magic"},
    {2, "Force"},
    {3, "Spirit"},
    {4, "Void"}
};

const std::map<int, std::string> roleLookup = {
    {0, "Attack"},
    {1, "Defense"},
    {2, "Health"},
    {3, "Support"},
    {4, "Evolve"},
    {5, "Xp"},
};

const std::map<int, std::string> rarityLookup = {
    {1, "Common"},
    {2, "Uncommon"},
    {3, "Rare"},
    {4, "Epic"},
    {5, "Legendary"},
};

const std::map<int, std::string> fractionLookup = {
    {0, "Unknown"},
    {1, "BannerLords"},
    {2, "HighElves"},
    {3, "SacredOrder"},
    {4, "CovenOfMagi"},
    {5, "OgrynTribes"},
    {6, "LizardMen"},
    {7, "Skinwalkers"},
    {8, "Orcs"},
    {9, "Demonspawn"},
    {10, "UndeadHordes"},
    {11, "DarkElves"},
    {12, "KnightsRevenant"},
    {13, "Barbarians"},
    {14, "NyresanElves"},
    {15, "Samurai"},
    {16, "Dwarves"},
};




//NLOHMANN_JSON_SERIALIZE_ENUM( app::HeroRole__Enum, {
//    {HeroRole__Enum_Attack, "Attack"},
//    {HeroRole__Enum_Defense, "Defense"},
//    {HeroRole__Enum_Health, "Health"},
//    {HeroRole__Enum_Support, "Support"},
//    {HeroRole__Enum_Evolve, "Evolve"},
//    {HeroRole__Enum_Xp, "Xp"},
//})
//
//NLOHMANN_JSON_SERIALIZE_ENUM( app::HeroFraction__Enum, {
//    {HeroFraction__Enum_Unknown, "Unknown"},
//    {HeroFraction__Enum_BannerLords, "BannerLords"},
//    {HeroFraction__Enum_HighElves, "HighElves"},
//    {HeroFraction__Enum_SacredOrder, "SacredOrder"},
//    {HeroFraction__Enum_CovenOfMagi, "CovenOfMagi"},
//    {HeroFraction__Enum_OgrynTribes, "OgrynTribes"},
//    {HeroFraction__Enum_LizardMen, "LizardMen"},
//    {HeroFraction__Enum_Skinwalkers, "Skinwalkers"},
//    {HeroFraction__Enum_Orcs, "Orcs"},
//    {HeroFraction__Enum_Demonspawn, "Demonspawn"},
//    {HeroFraction__Enum_UndeadHordes, "UndeadHordes"},
//    {HeroFraction__Enum_DarkElves, "DarkElves"},
//    {HeroFraction__Enum_KnightsRevenant, "KnightsRevenant"},
//    {HeroFraction__Enum_Barbarians, "Barbarians"},
//    {HeroFraction__Enum_NyresanElves, "NyresanElves"},
//    {HeroFraction__Enum_Samurai, "Samurai"},
//    {HeroFraction__Enum_Dwarves, "Dwarves"},
//})
//    
//NLOHMANN_JSON_SERIALIZE_ENUM( app::Element__Enum, {
//    {Element__Enum_Magic, "Magic"},
//    {Element__Enum_Force, "Force"},
//    {Element__Enum_Spirit, "Spirit"},
//    {Element__Enum_Void, "Void"},
//})
//
//NLOHMANN_JSON_SERIALIZE_ENUM( app::HeroRarity__Enum, {
//    {HeroRarity__Enum_Common, "Common"},
//    {HeroRarity__Enum_Uncommon, "Uncommon"},
//    {HeroRarity__Enum_Rare, "Rare"},
//    {HeroRarity__Enum_Epic, "Epic"},
//    {HeroRarity__Enum_Legendary, "Legendary"},
//})



// Custom injected code entry point
DWORD WINAPI Run(HMODULE hModule)
{
    // If you would like to write to a log file, specify the name above and use il2cppi_log_write()
    // il2cppi_log_write("Startup");

    // If you would like to output to a new console window, use il2cppi_new_console() to open one and redirect stdout
    // il2cppi_new_console();
    il2cpp_thread_attach(il2cpp_domain_get());


    AllocConsole();
    FILE* f;
    freopen_s(&f, "CONOUT$", "w", stdout);

    Il2CppDomain* domain = il2cpp_domain_get();
    size_t size = 0;

    const Il2CppAssembly** assemblies = il2cpp_domain_get_assemblies(domain, &size);

    const Il2CppAssembly* CSharpAssembly = nullptr;
    for (auto i = 0; i < size; ++i) {
        std::cout << assemblies[i]->aname.name << '\n';
        if (std::string(assemblies[i]->aname.name) == "Unity.Model") {
            std::cout << "Found assembly!\n";
            CSharpAssembly = assemblies[i];
        }
    }

    if (CSharpAssembly == nullptr) {
        std::cout << "Error! CSharpAssembly not found!\n";
        //return;
    }

    Il2CppClass* AppModelKlass = il2cpp_class_from_name(CSharpAssembly->image, "Client.Model", "AppModel");
    FieldInfo* instance = il2cpp_class_get_field_from_name(AppModelKlass, "_instance");


    app::AppModel* InGameInstAddr = 0;
    il2cpp_field_static_get_value(instance, &InGameInstAddr);

    app::AppModel* InGameInst = (app::AppModel*)(InGameInstAddr);

    const MethodInfo *m = il2cpp_class_get_method_from_name(AppModelKlass, "get_StaticData", 0);

    auto data = AppModel_get_StaticData(InGameInst, (MethodInfo*)m);
	
    auto data_ToString = (String*(*)(ClientStaticData*, MethodInfo*)) data->klass->vtable.ToString.methodPtr;
    auto data_ToString_MethodInfo = (MethodInfo *) data->klass->vtable.ToString.method;
    auto pszVector3_str = data_ToString(data, data_ToString_MethodInfo);

    app::StaticHeroData *staticHeroData = data->fields._.HeroData;
    app::List_1_SharedModel_Meta_Heroes_HeroType_ *heroTypes = staticHeroData->fields.HeroTypes;

    std::list<json> listHeroTypes;

    auto items = heroTypes->fields._items->vector;
    for(int i = 0; i < heroTypes->fields._size; i++) {
        auto heroType = (HeroType*) items[i];
        
        auto toString = (String*(*)(HeroType*, MethodInfo*)) heroType->klass->vtable.ToString.methodPtr;
        auto toString_MethodInfo = (MethodInfo *) heroType->klass->vtable.ToString.method;
        auto pszSomeObject = toString(heroType, toString_MethodInfo);
       
        auto isAwakeSupported =  app::HeroType_get_IsAwakeSupported(heroType, nullptr);
        auto isAwakable = app::HeroType_get_IsAwakable(heroType, nullptr);
        auto awakeLevel = app::HeroType_get_AwakeLevel(heroType, nullptr);
        auto awakenHeroId = app::HeroType_get_AwakenHeroId(heroType, nullptr);
        auto baseId = app::HeroType_get_BaseId(heroType, nullptr);
        auto isBaseType = app::HeroType_get_IsBaseType(heroType, nullptr);
        auto isBoss = app::HeroType_get_IsBoss(heroType, nullptr);
        auto isChecked = app::HeroType_get_IsChecked(heroType, nullptr);
        auto isMaxAwakend = app::HeroType_get_IsMaxAwakened(heroType, nullptr);
        auto onQuarantine = app::HeroType_get_OnQuarantine(heroType, nullptr);
        auto unAwakenHeroId = app::HeroType_get_UnAwakenHeroId(heroType, nullptr);

        auto avatarName = il2cppi_to_string(heroType->fields.AvatarName);
        auto heroName = il2cppi_to_string(heroType->fields.Name->fields.DefaultValue);

        JsonHero hero;
        hero.Fraction = fractionLookup.find(heroType->fields.Fraction)->second;
        hero.Rarity = rarityLookup.find(heroType->fields.Rarity)->second;
        hero.Role = roleLookup.find(heroType->fields.Role)->second;
        hero.Element = elementLookup.find(heroType->fields.Element)->second;
        hero.SummonWeight = heroType->fields.SummonWeight;
        hero.IsLocationOnly = heroType->fields.IsLocationOnly;
        hero.Id = heroType->fields.Id;
        hero.IsAwakeSupported = isAwakeSupported;
        hero.IsAwakable = isAwakable;
        hero.AwakeLevel = awakeLevel;
        hero.AwakenHeroId = awakenHeroId;
        hero.BaseId = baseId;
        hero.IsBaseType = isBaseType;
        hero.IsBoss = isBoss;
        hero.IsChecked = isChecked;
        hero.IsMaxAwakened = isMaxAwakend;
        hero.OnQuarantine = onQuarantine;
        hero.UnAwakenHeroId = unAwakenHeroId;

        hero.Health = (heroType->fields.BaseStats->fields.Health.m_rawValue / divisor);
        hero.Attack = (heroType->fields.BaseStats->fields.Attack.m_rawValue / divisor);
        hero.Defense = (heroType->fields.BaseStats->fields.Defence.m_rawValue / divisor);
        hero.Speed = (heroType->fields.BaseStats->fields.Speed.m_rawValue / divisor);
        hero.Resistance = (heroType->fields.BaseStats->fields.Resistance.m_rawValue / divisor);
        hero.Accuracy = (heroType->fields.BaseStats->fields.Accuracy.m_rawValue / divisor);
        hero.CriticalChance = (heroType->fields.BaseStats->fields.CriticalChance.m_rawValue / divisor);
        hero.CriticalDamage = (heroType->fields.BaseStats->fields.CriticalDamage.m_rawValue / divisor);
        hero.CriticalHeal = (heroType->fields.BaseStats->fields.CriticalHeal.m_rawValue / divisor);
        
        hero.AvatarName = avatarName;
        hero.Name = heroName;

        json jsonHero = hero;
        listHeroTypes.push_back(jsonHero);
    }

    json jsonHeroes = listHeroTypes;

    std::cout << "done" << std::endl;

	
	std::ofstream outfile ("hero_types.json");
    outfile << jsonHeroes << std::endl;
    outfile.close();

    while (true)
    {
        if (GetAsyncKeyState(VK_END) & 1)
        {
            break;
        }
    	::Sleep(100);
    	
    }
    fclose(f);
    FreeConsole();
    FreeLibraryAndExitThread(hModule, 0);

	
	return 0;
}

