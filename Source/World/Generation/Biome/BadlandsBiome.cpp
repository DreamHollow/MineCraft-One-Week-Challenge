#include "World/Generation/Biome/BadlandsBiome.h"

#include "World/WorldConstants.h"
#include "World/Generation/Structures/TreeGenerator.h"

BadlandsBiome::BadlandsBiome(int seed)
    : Biome(getNoiseParameters(), 900, 45, seed)
{
}

ChunkBlock BadlandsBiome::getTopBlock(Rand &rand) const
{
    return BlockId::Badlands;
}

ChunkBlock BadlandsBiome::getUnderWaterBlock(Rand &rand) const
{
    return BlockId::Badlands;
}

void BadlandsBiome::makeTree(Rand &rand, Chunk &chunk, int x, int y, int z) const
{
    if (y < WATER_LEVEL + 15)
    {
        if (rand.intInRange(0, 100) > 75) {
            makeCactus(chunk, rand, x, y, z);
        }
    }
}

NoiseParameters BadlandsBiome::getNoiseParameters()
{
    NoiseParameters heightParams;
    heightParams.octaves = 9;
    heightParams.amplitude = 80;
    heightParams.smoothness = 335;
    heightParams.heightOffset = -7;
    heightParams.roughness = 0.56;

    return heightParams;
}

ChunkBlock BadlandsBiome::getPlant(Rand &rand) const
{
    return BlockId::DeadShrub;
}
