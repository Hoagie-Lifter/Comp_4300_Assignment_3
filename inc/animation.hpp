#include "assets.h"

// MAYBE INCOMPLETE
// Lecture 8

class Animation
{
	std::string		m_name				= "none";
	std::string 	m_textureName		= "none";
	
	sf::IntRect		m_textureRect;
	
	size_t			m_frameCount		= 1;
	size_t			m_currentFrame		= 0;
	size_t			m_animationSpeed	= 0;
	
public:
	Animation() = default;
	Animation(const std::string & name, const std::string & textureName)
		: Animation(name, textureName, 1, 0) {}
	Animation(const std::string & name, const std::string & textureName, size_t frameCount, size_t frameCount, size_t speed)
		: m_name(name)
		, m_textureName(textureName)
		, m_frameCount(frameCount)
		, m_currentFrame(0)
		, m_speed(speed)
	{
		const sf::Texture & t = Assets::Instance().getTexture(textureName)
		m_textureRect.size = {int(t.getSize().x / frameCount), int(t.getSize().y)}
	}
	
	void update()
	{
		m_currentFrame++
		
		// TODO: 
		// - calculate the correct frame of animation to play based on currentFrame
		// - set the texture rectangle properly (see constructor for sample)
	}
	
	bool hasEnded() const
	{
		// TODO: detect when animation has ended (last frame was played) and return true
		// - if you've gone back to the first frame of animation, you've ended
		
		return false;
	}
	
	const std::string & getName() const
	{
		return m_name;
	}
	
	const sf::IntRect & getRect() const
	{
		return m_textureRect;
	}
};