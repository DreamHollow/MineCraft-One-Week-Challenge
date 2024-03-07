#include "World/Event/PlayerGrabEvent.h"

#include "Item/Material.h"
#include "Player/Player.h"
#include "World/World.h"

/// @brief Event class that handles player picking up non-block items.
/// @param button 
/// @param location 
/// @param player 
PlayerGrabEvent::PlayerGrabEvent(sf::Mouse::Button button,
                               const glm::vec3 &location, Player &player)
    : m_buttonPress(button)
    , m_digSpot(location)
    , m_pPlayer(&player)
{

}

void PlayerGrabEvent::handle(World &world)
{
    auto chunkLocation = World::getChunkXZ(static_cast<int>(m_digSpot.x),
                                           static_cast<int>(m_digSpot.z));

    if (world.getChunkManager().chunkLoadedAt(chunkLocation.x,
                                              chunkLocation.z)) {
        //dig(world);
    }
}

/*
void PlayerGrabEvent::dig(World &world)
{
    int x = static_cast<int>(m_digSpot.x);
    int y = static_cast<int>(m_digSpot.y);
    int z = static_cast<int>(m_digSpot.z);

    switch (m_buttonPress)
    {
        case sf::Mouse::Button::Left:
        {
            ChunkBlock block = world.getBlock(x, y, z); // Get actual block data

            //const Material &temp_material = Material::toMaterial((BlockId)block.id);

            const auto &material = Material::toMaterial((BlockId)block.id); // Copy block material

            // Catch that an air block is being added BEFORE placing in inventory
            if(material.id != Material::ID::Nothing)
            {
                m_pPlayer->addItem(material);

                // Comment this out unless object pickup isn't working at all.
                /*
                if(debug)
                {
                    std::cout << db_string << "Player should now have: ";
                    std::cout << material.getItemName() << "\n";
                }
            }

            world.updateChunk(x, y, z);
            world.setBlock(x, y, z, 0);

            break;
        }
        case sf::Mouse::Button::Right:
        {
            ItemStack &stack = m_pPlayer->getHeldItems();
            const Material &material = stack.getMaterial();

            // Ideally player can't hold this anyway, but just in case.
            if (material.id == Material::ID::Nothing)
            {
                return;
            }
            else
            {
                stack.remove();
                world.updateChunk(x, y, z);
                world.setBlock(x, y, z, material.toBlockID());
                break;
            }
        }
        default:
        {
            break;
        }
    };
}
*/
