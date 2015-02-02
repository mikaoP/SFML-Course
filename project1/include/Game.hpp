#ifndef BOOK_GAME_HPP
#define BOOK_GAME_HPP

#include <SFML/Graphics.hpp>


class Game : private sf::NonCopyable {
	public:
		Game();
		void run();
		
	private:
		void processEvents();
		void update(sf::Time elapsedTime);
		void render();

		void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);
		void updateStatistics(sf::Time elapsedTime);
		
	private:
		static const float PlayerSpeed;
		static const sf::Time TimePerFrame;

		sf::RenderWindow mWindow;
		sf::CircleShape mPlayer;

		sf::Font mFont;
		sf::Text mStatisticsText;
		sf::Time mStatisticsUpdateTime;
		std::size_t mStatisticsNumFrames;

		bool mIsMovingUp;
		bool mIsMovingDown;
		bool mIsMovingRight;
		bool mIsMovingLeft;
};

#endif // BOOK_GAME_HPP