void StopSound(RE::StaticFunctionTag*) {
    RE::PlayerCharacter::GetSingleton()->PauseCurrentDialogue();
}

bool PapyrusFuncs(RE::BSScript::IVirtualMachine* vm) {
    vm->RegisterFunction("StopSound", "LNTC_PVESKSEFunctions", StopSound);
    return true;
}

SKSEPluginLoad(const SKSE::LoadInterface* skse) {
    SKSE::Init(skse);
    SKSE::GetPapyrusInterface()->Register(PapyrusFuncs);
    return true;
}
