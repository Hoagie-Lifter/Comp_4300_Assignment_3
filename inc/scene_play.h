

#include "scene.h"
#include "entity_manager.hpp"

class ScenePlay : public Scene
{
	struct PlayerConfig
	{
		std::string		weapon;
		float 			x;
		float 			y;
		float 			collisionX;
		float 			collisionY;
		float 			speed;
		float 			maxSpeed;
		float			jump;
		float 			gravity;
	};
	
protected:
	PlayerConfig				m_playerConfig;
	std::shared_ptr<Entity>		m_player;
	
	std::string					m_levelPath;
	const Vec2f					m_gridSize 		= {64, 64};
	
	bool						m_drawCollision = false;
	bool						m_drawGrid		= true;
	bool						m_drawTextures	= true;					

	void init(const std::string & levelPath);
	
	void loadLevel(const std::string & filename);
	
};
