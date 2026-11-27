/* LEVEL_02:0x1C0DD0 -- tests whether the player is within 30 units of the object and inside its region. */
extern void func_01AC80(float *point);
extern int func_08B060(char *region, float *point);
int func_1C0DD0(char *object)
{
    float point[4];
    float dx, dz;
    int r;
    char *resource;
    func_01AC80(point);
    r = 0;
    resource = *(char **)(object + 0x54);
    dx = *(float *)(object + 0x30) - point[0];
    dz = *(float *)(object + 0x38) - point[2];
    if (dx * dx + dz * dz < 900.0f) {
        r = func_08B060(*(char **)(resource + 0x2C), point) != 0;
    }
    return r;
}
