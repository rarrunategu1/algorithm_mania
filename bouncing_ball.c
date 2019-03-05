#include <cs50.h>
#include <stdio.h>

int bouncingBall(double, double, double);

int main (void)
{

    int timesBallViewed = bouncingBall(3.0, 0.66, 1.5);

    printf("The ball was viewed %i times!\n", timesBallViewed);


}

int bouncingBall(double h, double bounce, double window)
{

    if(h <= 0 || (bounce <= 0 || bounce >= 1) || window >= h)
    {
        //printf("Constraints NOT met\n");
        return -1;
    }
    else
    {
        //printf("Constraints met\n");

        int ballViewCount = 1;
        int newHeight = 0;
        //everytime ball bounces it bounces up two thirds of it's last height

        newHeight = h*2/3;
        do
        {
            newHeight = newHeight*2/3;
            ballViewCount = ballViewCount +2;

        }
        while(newHeight > window);
        //printf("%i\n", newHeight);
        //printf("Ball Viewed %i\n", ballViewCount);


        return ballViewCount;

    }
}

//ball drops from nth floor

//height is h ex. 3 meters

//ball bounce at rate of br of it's height.  ex 2/3 bounce rate is 0.66

//mother at win meters from ground ex. 1.5 meters

//how many times will mom see ball pass

//CONDITIONS
    /*
    float parameter h in meters must be greater than 0
    float parameter br must be greater than 0 and less than 1
    float parameter win must be less than h
    return positive integer of the number
    of times the mother see the ball otherwise return -1
    */
