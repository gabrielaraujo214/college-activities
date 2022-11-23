int main()
{
    float meters, feet;
    printf("Enter measure in meters: ");
    scanf("%f", &meters);
    if (meters >= 0)
    {
        printf("Meters: %f\n", meters);
        feet = meters * 3.315;
        printf("Feet: %f\n", feet);
    }
    else
    {
        printf("Measure can't be less than zero'\n");
    }
    return 0;
}
