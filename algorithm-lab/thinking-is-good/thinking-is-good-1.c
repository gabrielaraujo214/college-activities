// Weight force (or just weight) of a body is the gravitational force, produced by a second body of great mass, such as the Earth, the Moon or the Sun. According to the law of universal gravitation, two bodies that contain mass attract each other with a force inversely proportional to the square of the distance separating them. We know that gravitational action in space is zero, proof of which is that astronauts float when they are in orbit. But the fact of floating does not mean that we lose mass, if it were, we would no longer exist. Since we know that the gravitational pull of Mars is 38% of the gravitational pull of Earth, we could easily calculate the weight of a person on that planet. Imagine a person who, on earth, weighs 80 kg. On Mars, it would weigh 38% of that amount. That is, approximately 30 kg. To arrive at this value, the calculation performed was:

// weight_on_mars = weight_on_earth * 0.38

// weight_on_mars = 80 * 0.38

// weight_on_mars = 30.4

// Considering the situation presented, build an algorithm using C language that obtains the weight of a person on Earth and displays the weight of this person on Mars.

#include <stdio.h>

int main()
{
    float weight_on_earth, weight_on_mars;

    printf("Enter your weight: ");
    scanf("%f", &weight_on_earth);

    weight_on_mars = weight_on_earth * 0.38;

    printf("Your weight on Mars would be: %.3f\n", weight_on_mars);

    return 0;
}