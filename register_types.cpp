#include "register_types.h"

#include "core/version.h"

#if VERSION_MAJOR < 4
#include "core/class_db.h"
#else
#include "core/object/class_db.h"
#endif

#include "fastnoise_noise_params.h"
#include "noise.h"

void initialize_fastnoise_module(ModuleInitializationLevel p_level) {
	if (p_level == MODULE_INITIALIZATION_LEVEL_SCENE) {
		GDREGISTER_CLASS(FastNoise);
		GDREGISTER_CLASS(FastnoiseNoiseParams);
	}
}

void uninitialize_fastnoise_module(ModuleInitializationLevel p_level) {
}
