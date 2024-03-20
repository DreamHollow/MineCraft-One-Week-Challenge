#include "Audio/AudioPlayer.h"

/// @brief Initializes audio with no given arguments, but especially for sound banks.
AudioPlayer::AudioPlayer()
{

}

/// @brief Initializes a single sound, very specific uses.
/// @param sample_data 
AudioPlayer::AudioPlayer(const char* sample_data)
{

}

AudioPlayer::~AudioPlayer()
{
    m_sounds.clear();
    m_sounds.shrink_to_fit();
}

void AudioPlayer::add(const char* sample)
{
    
}
