/* LEVEL_17:047288 -- re-evaluates the level's cached handle, stores the new
   one and publishes its half-scale value when the cache was stale or forced. */
extern int func_112DF8(int a0);

int func_047288(char *a0, int a1, int a2)
{
    float v;

    if (a2 == 0 && *(int *)(a0 + 0xFC8) == a1) {
        return 0;
    }
    *(int *)(a0 + 0xFC8) = a1;
    v = (float)(unsigned int)func_112DF8(a1);
    *(float *)(a0 + 0x970) = v;
    *(float *)(a0 + 0x96C) = v;
    return 1;
}
