#ifndef BADLANDSBIOME_H_INCLUDED
#define BADLANDSBIOME_H_INCLUDED 1

#include "Biome.h"

class BadlandsBiome : public Biome {
  public:
    BadlandsBiome(int seed);

    ChunkBlock getPlant(Rand &rand) const override;
    ChunkBlock getTopBlock(Rand &rand) const override;
    ChunkBlock getUnderWaterBlock(Rand &rand) const override;
    void makeTree(Rand &rand, Chunk &chunk, int x, int y, int z) const override;

  private:
    NoiseParameters getNoiseParameters() override;
};

#endif
