/* LEVEL_01:0x0370A0 -- placement copy of LEVEL_02_03BAE8.c. */
unsigned short *func_0370A0(unsigned short *first, unsigned short *last,
                            unsigned short pivot)
{
    for (;;) {
        unsigned short saved;

        --last;
        if (*first < pivot) {
            do {
                ++first;
            } while (*first < pivot);
        }
        while (pivot < *last)
            --last;
        if (last <= first)
            return first;
        saved = *first;
        *first = *last;
        *last = saved;
        ++first;
    }
}
