/* FRONTEND:0x006200 -- copies the big vertex block into the display list. */
extern int D_0010EA90[];

extern void *memcpy(void *, const void *, unsigned int);

void func_006200(char *src)
{
    char *dst = (char *)D_0010EA90[4];

    memcpy(dst, src, 64);
    *(char *)((char *)D_0010EA90 + D_0010EA90[1] + 8) = 1;
}
