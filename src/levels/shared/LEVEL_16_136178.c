/* LEVEL_16:0x136178 -- sets a mode byte, optionally a float field, then a child counter. */
void func_136178(char *object)
{
    char *other = *(char **)(object + 0x54);
    char *child = *(char **)(object + 0x58);

    *(unsigned char *)(object + 0x45) = 3;
    if (*(unsigned char *)other == 0)
        *(float *)(object + 0x70) = 10.000199317932129f;
    *(int *)(child + 0x28) = 2;
}
