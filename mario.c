#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

// ask for height between 1 and 23

    do
    {
        height = get_int("Height between 1 and 23: ");
    }
    while (height < 0 || height > 23);

// stairs

    for (int i = height; i >= 1; i--)
    {
        for (int space = 1; space < i; space++)
        {
            printf(" ");
        }

        for (int hash = height; hash >= i - 1; hash--)
        {
            printf("#");
        }

        printf("\n");
    }
}

////////////////////////////////////////
/*
:KumSholt: tamomom came hom - Today at 11:17 PM
so if i = height and i >= 1 it goes into the loop right

meushijyo - Today at 11:17 PM
ya it'll do the outer loop twice

:KumSholt: tamomom came hom - Today at 11:17 PM
what you mean outer loop

meushijyo - Today at 11:17 PM
for (int i = height; i >= 1; i--)
this part

:KumSholt: tamomom came hom - Today at 11:17 PM
wat u mean

meushijyo - Today at 11:18 PM
so first loop it'll be (int i = 1; i >= 1; i--)
so  it runs because i >=1, since 1 >=1
then at the end of the loop it executes i--, so you subtract 1 from i, so its 0 now

:KumSholt: tamomom came hom - Today at 11:19 PM
umm ok that make sense
then the space one doesnt run right

meushijyo - Today at 11:19 PM
wait I guess it only runs once huh

:KumSholt: tamomom came hom - Today at 11:19 PM
wat

meushijyo - Today at 11:19 PM
wow I havent done for loop in a long time

:KumSholt: tamomom came hom - Today at 11:19 PM
ooonoooo
@tayuku

meushijyo - Today at 11:19 PM
ya everything I said happens and then it doesnt loop again I think

:KumSholt: tamomom came hom - Today at 11:20 PM
so if the conditions for the loop happens it goes to the space one

meushijyo - Today at 11:20 PM
for (int space = 1; space < i; space++)
        {
            printf(" ");
        }

        for (int hash = height; hash >= i - 1; hash--)
        {
            printf("#");
        }

        printf("\n");

:KumSholt: tamomom came hom - Today at 11:20 PM
but it doesnt do the space one because i = height = 1

meushijyo - Today at 11:20 PM
so all of this happens once

:KumSholt: tamomom came hom - Today at 11:20 PM
it doesnt do the space one though right

meushijyo - Today at 11:21 PM
ya doesnt do space since 1 isnt < 1

:KumSholt: tamomom came hom - Today at 11:21 PM
why does it print 2 hashes tho

meushijyo - Today at 11:21 PM
for (int hash = height; hash >= i - 1; hash--)
for (int hash = 1;1 >= 0; hash--)

:KumSholt: tamomom came hom - Today at 11:22 PM
oh i see it now

meushijyo - Today at 11:22 PM
ya so runs twice

:KumSholt: tamomom came hom - Today at 11:22 PM
ohhhhhhhhhhhhhhhhhhhh
*/
////////////////////////////////////////
