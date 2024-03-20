#ifndef AUDIO_PLAYER_H_INCLUDED
#define AUDIO_PLAYER_H_INCLUDED 1

#include "Audio/Track.h"

/*
    The AudioPlayer is attached to entities, blocks,
    and anything that can make a sound.

    It's limited by SFML's limitations on all possible
    audio that can play, so pointers are used to allocate
    and de-allocate samples for stability.

    Possible sounds that can play are kept in a "sound bank".
*/

// I hope Hopson likes this because audio is kind of my thing - DH

class AudioPlayer
{
public:
    AudioPlayer();
    AudioPlayer(const char* sample_data);
    ~AudioPlayer();

    void add(const char* sample);

private:
    float m_center_of_source;
    float m_furthest_range;

    std::vector<std::unique_ptr<sf::Sound>> m_sounds;
    std::unique_ptr<sf::SoundBuffer> m_sound_buffer = nullptr;
};

#endif