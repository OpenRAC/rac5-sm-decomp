/* LEVEL_01:0x034678 -- scans a stream of tagged words up to the 0xFE end tag and stores the count of 0x01 runs, the byte length and a rounded size. */
void func_034678(int *result, const unsigned int *stream)
{
    unsigned int tag;
    int count = 0;
    int length = 0;
    int active = 0;

    while (1) {
        tag = *stream & 0xff000000U;
        stream++;
        if (tag == 0x01000000U) {
            length += 16;
            if (!active) {
                count++;
                active = 1;
                length += 16;
            }
        } else if (tag == 0xfe000000U) {
            break;
        } else {
            active = 0;
        }
    }
    result[2] = length;
    result[0] = count;
    result[1] = (count * 18 + 3) & 0xFFFFFFFCU;
}
