#include "World/Generation/Biome/DoomedBiome.h"

#include "World/WorldConstants.h"
#include "World/Generation/Structures/TreeGenerator.h"

DoomedBiome::DoomedBiome(int seed)
    : Biome(getNoiseParameters(), 1350, 500, seed)
{
}

ChunkBlock DoomedBiome::getTopBlock(Rand &rand) const
{
    return BlockId::Sand;
}

ChunkBlock DoomedBiome::getUnderWaterBlock(Rand &rand) const
{
    return BlockId::Sand;
}

void DoomedBiome::makeTree(Rand &rand, Chunk &chunk, int x, int y, int z) const
{
    if (y < WATER_LEVEL + 15) {
        if (rand.intInRange(0, 100) > 75) {
            makePalmTree(chunk, rand, x, y, z);
        }
        else {
            makeCactus(chunk, rand, x, y, z);
        }
    }
    else {
        makeCactus(chunk, rand, x, y, z);
    }
}

NoiseParameters DoomedBiome::getNoiseParameters()
{
    NoiseParameters heightParams;
    heightParams.octaves = 9;
    heightParams.amplitude = 80;
    heightParams.smoothness = 335;
    heightParams.heightOffset = -7;
    heightParams.roughness = 0.56;

    return heightParams;
}

ChunkBlock DoomedBiome::getPlant(Rand &rand) const
{
    return BlockId::DeadShrub;
}
