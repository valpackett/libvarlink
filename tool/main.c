#include "command.h"
#include "util.h"

int main(int argc, char **argv) {
        _cleanup_(cli_freep) Cli *cli = NULL;
        long r;

        r = cli_new(&cli);
        if (r < 0)
                return -r;

        return cli_run(cli, argc, argv);
}
