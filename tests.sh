#!/bin/bash

make tests
if [[ $? == 0 ]]; then
	bin/tests
fi
