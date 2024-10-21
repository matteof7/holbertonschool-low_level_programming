#!/bin/bash
echo '#include <stdio.h>\nint main(void) { puts( }' > puzzle.c && gcc puzzle.c -o puzzle && ./puzzle
