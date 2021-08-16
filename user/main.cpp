// Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// Custom injected code entry point
#include "pch-il2cpp.h"

#define _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <iostream>
#include "il2cpp-appdata.h"
#include "helpers.h"
#include <nlohmann/json.hpp>
#include <fstream>
#include "magic_enum.hpp"

using namespace app;
using json = nlohmann::ordered_json;

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
	j = json{
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


DWORD WINAPI Run(HMODULE hModule)
{
	// If you would like to write to a log file, specify the name above and use il2cppi_log_write()
	il2cppi_log_write("Startup");

	// If you would like to output to a new console window, use il2cppi_new_console() to open one and redirect stdout
	il2cppi_new_console();
	il2cpp_thread_attach(il2cpp_domain_get());


	//AllocConsole();
	//FILE* f;
	//freopen_s(&f, "CONOUT$", "w", stdout);

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
	}

	try {
		if (il2cppi_is_initialized(JsonMain__TypeInfo) && il2cppi_is_initialized(SharedModelManager__TypeInfo)) {
			auto staticData = (*SharedModelManager__TypeInfo)->static_fields->StaticData;
			auto staticString = app::JsonMain_ToJsonStr((Object*)staticData, true, nullptr);
			std::ofstream outfile("static_data.json");
			outfile << il2cppi_to_string(staticString) << std::endl;
			outfile.close();
		}

	}
	catch (Il2CppExceptionWrapper& e) {}

	Il2CppClass* AppModelKlass = il2cpp_class_from_name(CSharpAssembly->image, "Client.Model", "AppModel");
	FieldInfo* instance = il2cpp_class_get_field_from_name(AppModelKlass, "_instance");

	app::AppModel* InGameInstAddr = 0;
	il2cpp_field_static_get_value(instance, &InGameInstAddr);

	app::AppModel* InGameInst = (app::AppModel*)(InGameInstAddr);

	const MethodInfo* m = il2cpp_class_get_method_from_name(AppModelKlass, "get_StaticData", 0);
	ClientStaticData* data = AppModel_get_StaticData(InGameInst, (MethodInfo*)m);

	try {
		if (il2cppi_is_initialized(JsonMain__TypeInfo) && il2cppi_is_initialized(AppModel__TypeInfo)) {
			const MethodInfo* m = il2cpp_class_get_method_from_name(AppModelKlass, "ReadUser", 0);

			Nullable_1_Int32___Boxed* timeOut = (Nullable_1_Int32___Boxed*) il2cpp_object_new((Il2CppClass*) *Nullable_1_Int32___TypeInfo);
			Nullable_1_Int32___ctor(timeOut, 0, nullptr);
			auto timeOutValue = il2cpp_value_box((Il2CppClass*)*Nullable_1_Int32___TypeInfo, &timeOut);

			UserReadGuard* user = AppModel_ReadUser(InGameInst, *(Nullable_1_Int32_*)timeOutValue, (MethodInfo*)m);
			

			
			auto appModelString = app::JsonMain_ToJsonStr((Object*)user, true, nullptr);
			std::ofstream outfile("appmodel_user_data.json");

			std::cout
				<< "0x"
				<< std::hex
				<< std::noshowbase
				<< std::setw(16)
				<< std::setfill('0')
				<< user
				<< std::endl;

			outfile << il2cppi_to_string(appModelString) << std::endl;
			outfile.close();
		}

	}
	catch (Il2CppExceptionWrapper& e) {}

	app::StaticHeroData* staticHeroData = data->fields._.HeroData;
	app::List_1_SharedModel_Meta_Heroes_HeroType_* heroTypes = staticHeroData->fields.HeroTypes;

	std::list<json> listHeroTypes;

	auto items = heroTypes->fields._items->vector;
	for (int i = 0; i < heroTypes->fields._size; i++) {
		auto heroType = (HeroType*)items[i];

		auto toString = (String * (*)(HeroType*, MethodInfo*)) heroType->klass->vtable.ToString.methodPtr;
		auto toString_MethodInfo = (MethodInfo*)heroType->klass->vtable.ToString.method;
		auto pszSomeObject = toString(heroType, toString_MethodInfo);

		auto isAwakeSupported = app::HeroType_get_IsAwakeSupported(heroType, nullptr);
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
		hero.Fraction = magic_enum::enum_name(heroType->fields.Fraction);
		hero.Rarity = magic_enum::enum_name(heroType->fields.Rarity);
		hero.Role = magic_enum::enum_name(heroType->fields.Role);
		hero.Element = magic_enum::enum_name(heroType->fields.Element);
		
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

	std::ofstream outfile("hero_types.json");
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
	/*fclose(f);
	FreeConsole();
	FreeLibraryAndExitThread(hModule, 0);*/

	return 0;
}
