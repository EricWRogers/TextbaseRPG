#include "Monster.hpp"
#include "Room.hpp"
#include "Player.hpp"

#include <math.h>

void Monster::Start()
{
    m_character = 'M';
}

void Monster::Update()
{
    Player& player = (Player&)room->GetPlayer();

	Vector2D direction = Normalize(player.GetPosition() - m_position);

	direction.x = round(direction.x);
	direction.y = round(direction.y);

	// attack
	if (room->GetLocation(direction + m_position) == 'P')
	{
		printf("attack\n");
		return;
	}

	// move
	if (room->GetLocation(direction + m_position) == ' ')
		m_position = direction + m_position;

	Print(direction);
}
