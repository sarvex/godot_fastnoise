#include "register_types.h"
#include "core/class_db.h"

#include "noise.h"
#include "fastnoise_noise_params.h"


void register_fastnoise_types() {

	ClassDB::register_class<FastNoise>();
	ClassDB::register_class<FastnoiseNoiseParams>();
}


void unregister_fastnoise_types() {

}


