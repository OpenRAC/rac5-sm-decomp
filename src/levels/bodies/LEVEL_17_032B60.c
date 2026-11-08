unsigned short *func_032B60(unsigned short *first, unsigned short *last,
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
