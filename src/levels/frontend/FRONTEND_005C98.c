/* FRONTEND:0x005C98 -- looks up one frame cell in an owner's table, with wrap-around on the frame index. */
void *func_005C98(const char *owner, int column, int frame)
{
    char *table;
    int width;
    int count;

    if (owner == 0)
        return 0;
    table = *(char **)(owner + 0xc);
    if (table == 0)
        return 0;
    width = *(unsigned short *)(table + 0x2a);
    count = *(unsigned short *)(table + 0x2e);
    if (column < 0 || column >= width)
        return 0;
    frame %= count;
    if (frame < 0)
        frame += count;
    return *(void **)(table + *(int *)(table + 0x18) + (width * frame + column) * 4);
}
