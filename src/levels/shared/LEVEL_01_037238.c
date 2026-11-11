/* LEVEL_01:0x037238 -- shifts earlier entries up while the value is below them, then stores the value. */
void func_037238(unsigned short *place, unsigned short value)
{
    unsigned short *prev = place - 1;

    while (value < place[-1]) {
        *place = *prev;
        place = prev;
        prev = place - 1;
    }
    *place = value;
}
