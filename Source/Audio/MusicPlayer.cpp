#include "Audio/MusicPlayer.h"

MusicPlayer::MusicPlayer()
{
    
}

MusicPlayer::MusicPlayer(const char* music_file)
{
    if(std::filesystem::exists(music_file))
    {
        music = std::make_unique<sf::Music>();
        music->openFromFile(music_file);
    }
    else
    {
        std::cout << "Music track could not be loaded.\n";
        std::cout << "Missing file or corrupt data.\n";
    }
}

MusicPlayer::~MusicPlayer()
{
    // Music ptr should reset on it's own.
}

void MusicPlayer::add(const char* music_file)
{
    // Get current working directory first
    std::string full_dir;
    full_dir = std::filesystem::current_path();
    full_dir += "/Res/Music/";
    full_dir += music_file;

    //std::cout << "Full music path guessed:\n";
    //std::cout << full_dir << "\n";

    if(std::filesystem::exists(full_dir))
    {
        // Until a track list exists, just load one file.

        music = std::make_unique<sf::Music>();
        music->openFromFile(full_dir);
        loaded = true;
    }
    else
    {
        std::cout << "Music player tried to add a music track,\n";
        std::cout << "but there was none.\n";
    }
}

void MusicPlayer::play()
{
    if(music != nullptr)
    {
        music->play();
    }
    else
    {
        std::cout << "Music player was asked to play something,\n";
        std::cout << "but no music is currently assigned.\n";
    }
}

void MusicPlayer::stop()
{
    if(music != nullptr)
    {
        music->stop();
    }
    else
    {
        std::cout << "Music player was asked to stop something,\n";
        std::cout << "but no music can be stopped.\n";
    }
}