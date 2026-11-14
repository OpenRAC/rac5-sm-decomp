/* boot:0x01EAB4C0 -- allocate an aligned block through the registered hook or malloc. */
extern void *(*rad_memory_base)(unsigned int n);
extern unsigned int rad_memory_size;
extern void *malloc(unsigned int n);

void *radmalloc(unsigned int numbytes)
{
    unsigned int size;
    unsigned char *ptr;
    unsigned int off;
    int type;

    if (numbytes == 0 || numbytes == 0xFFFFFFFF)
        return 0;
    size = numbytes + 0x47;
    if (rad_memory_base != 0) {
        ptr = rad_memory_base(size);
        if (ptr != 0) {
            if ((int)ptr == -1)
                return 0;
            type = 3;
            goto done;
        }
    }
    ptr = malloc(size);
    if (ptr == 0)
        return 0;
    type = 0;
done:
    off = (((unsigned int)ptr + 0x47) & 0xC0) - (unsigned int)ptr;
    off &= 0xFF;
    ptr += off;
    ptr[-1] = off;
    ptr[-2] = type;
    if (type == 3)
        ((unsigned int *)ptr)[-2] = rad_memory_size;
    return ptr;
}
