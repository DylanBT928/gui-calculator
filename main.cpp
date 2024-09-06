#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(234, 323), "GUI Calculator");
    sf::RectangleShape zeroButton(sf::Vector2f(114, 48));
    sf::RectangleShape oneButton(sf::Vector2f(57, 47));
    sf::RectangleShape twoButton(sf::Vector2f(56, 47));
    sf::RectangleShape threeButton(sf::Vector2f(57, 47));
    sf::RectangleShape fourButton(sf::Vector2f(57, 47));
    sf::RectangleShape fiveButton(sf::Vector2f(56, 47));
    sf::RectangleShape sixButton(sf::Vector2f(57, 47));
    sf::RectangleShape sevenButton(sf::Vector2f(57, 47));
    sf::RectangleShape eightButton(sf::Vector2f(56, 47));
    sf::RectangleShape nineButton(sf::Vector2f(57, 47));
    sf::RectangleShape decimalButton(sf::Vector2f(57, 48));
    sf::RectangleShape clearButton(sf::Vector2f(57, 47));
    sf::RectangleShape powerButton(sf::Vector2f(56, 47));
    sf::RectangleShape rootButton(sf::Vector2f(57, 47));
    sf::RectangleShape divideButton(sf::Vector2f(60, 47));
    sf::RectangleShape multiplyButton(sf::Vector2f(60, 47));
    sf::RectangleShape subtractButton(sf::Vector2f(60, 47));
    sf::RectangleShape addButton(sf::Vector2f(60, 47));
    sf::RectangleShape equalButton(sf::Vector2f(60, 48));

    zeroButton.setPosition(sf::Vector2f(0, 274));
    oneButton.setPosition(sf::Vector2f(0, 226));
    twoButton.setPosition(sf::Vector2f(58, 226));
    threeButton.setPosition(sf::Vector2f(115, 226));
    fourButton.setPosition(sf::Vector2f(0, 178));
    fiveButton.setPosition(sf::Vector2f(58, 178));
    sixButton.setPosition(sf::Vector2f(115, 178));
    sevenButton.setPosition(sf::Vector2f(0, 130));
    eightButton.setPosition(sf::Vector2f(58, 130));
    nineButton.setPosition(sf::Vector2f(115, 130));
    decimalButton.setPosition(sf::Vector2f(115, 274));
    clearButton.setPosition(sf::Vector2f(0, 82));
    powerButton.setPosition(sf::Vector2f(58, 82));
    rootButton.setPosition(sf::Vector2f(115, 82));
    divideButton.setPosition(sf::Vector2f(173, 82));
    multiplyButton.setPosition(sf::Vector2f(173, 130));
    subtractButton.setPosition(sf::Vector2f(173, 178));
    addButton.setPosition(sf::Vector2f(173, 226));
    equalButton.setPosition(sf::Vector2f(173, 274));

    zeroButton.setFillColor(sf::Color(88, 88, 88));
    oneButton.setFillColor(sf::Color(88, 88, 88));
    twoButton.setFillColor(sf::Color(88, 88, 88));
    threeButton.setFillColor(sf::Color(88, 88, 88));
    fourButton.setFillColor(sf::Color(88, 88, 88));
    fiveButton.setFillColor(sf::Color(88, 88, 88));
    sixButton.setFillColor(sf::Color(88, 88, 88));
    sevenButton.setFillColor(sf::Color(88, 88, 88));
    eightButton.setFillColor(sf::Color(88, 88, 88));
    nineButton.setFillColor(sf::Color(88, 88, 88));
    decimalButton.setFillColor(sf::Color(88, 88, 88));
    clearButton.setFillColor(sf::Color(55, 55, 58));
    powerButton.setFillColor(sf::Color(55, 55, 58));
    rootButton.setFillColor(sf::Color(55, 55, 58));
    divideButton.setFillColor(sf::Color(242, 163, 60));
    multiplyButton.setFillColor(sf::Color(242, 163, 60));
    subtractButton.setFillColor(sf::Color(242, 163, 60));
    addButton.setFillColor(sf::Color(242, 163, 60));
    equalButton.setFillColor(sf::Color(242, 163, 60));

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color(38, 38, 38));
        window.draw(zeroButton);
        window.draw(oneButton);
        window.draw(twoButton);
        window.draw(threeButton);
        window.draw(fourButton);
        window.draw(fiveButton);
        window.draw(sixButton);
        window.draw(sevenButton);
        window.draw(eightButton);
        window.draw(nineButton);
        window.draw(decimalButton);
        window.draw(clearButton);
        window.draw(powerButton);
        window.draw(rootButton);
        window.draw(divideButton);
        window.draw(multiplyButton);
        window.draw(subtractButton);
        window.draw(addButton);
        window.draw(equalButton);
        window.display();
    }
}
