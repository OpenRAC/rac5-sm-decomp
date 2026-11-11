/* FRONTEND:0x020A08 -- maps two engine ids to their table slots. */
int func_020A08(int param_1)
{
    switch (param_1) {
    case 0x20000:
        return 0xA61;
    case 0x10000:
        return 0xA62;
    }
    return 0;
}
