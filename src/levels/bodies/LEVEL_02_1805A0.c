/* LEVEL_02:0x1805A0 -- appends one word to a child list and bumps its count. */
void func_1805A0(char *object)
{
    char *child = *(char **)(object + 0x54);
    char *target = *(char **)(child + 0x18);
    if (target != 0) {
        unsigned int index = *(unsigned char *)(target + 0x45);
        char *slots = *(char **)(target + 0x54);
        *(int *)(slots + (index << 2)) = *(int *)(child + 8);
        *(unsigned char *)(target + 0x45) = *(unsigned char *)(target + 0x45) + 1;
    }
}
