#!/bin/bash

ifconfig -a | grep -e "ether" | cut -d ' ' -f 2
