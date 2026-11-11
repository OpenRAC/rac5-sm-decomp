/* FRONTEND:0x025CC0 -- counts records with two nonzero words, stride-walked. */
int func_025CC0(int *record)
{
    int count = 0;
    int stride;

    if (record[0] != 0) {
        while (record[0] != 0) {
            stride = record[0];
            if (record[1] != 0 && record[2] != 0)
                count++;
            record = (int *)((char *)record + stride) + 1;
        }
    }
    return count;
}
