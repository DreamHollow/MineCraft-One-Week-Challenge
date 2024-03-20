#ifndef MUSIC_PLAYER_H
#define MUSIC_PLAYER_H
#include "AudioPlayer.h"

class MusicPlayer : public AudioPlayer
{
public:
    MusicPlayer();
    MusicPlayer(const char* music_file);
    ~MusicPlayer();

    uint16_t tries = 0;

    const bool is_loaded() const { return this->loaded; };
    const bool is_playing() const {
        if(music->Playing == true)
        {
            return true;
        }
        else
        {
            return false;
        }
    };

    //void add_track(); // Does nothing right now

    void add(const char* music_file); // Until tracks are implemented
    void play();
    void stop();

private:
    bool loaded = false;
    std::unique_ptr<sf::Music> music = nullptr;
};

#endif