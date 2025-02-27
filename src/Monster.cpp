#include "Monster.hpp"
#include "Room.hpp"
#include "Player.hpp"


void Monster::Start()
{
    m_character = 'M';
}

void Monster::Update()
{
    Player& player = (Player&)room->GetPlayer();

	Vector2D direction = player.GetPosition() - m_position;

	Print(direction);
}
