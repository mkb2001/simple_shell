#!/bin/bash

pid_max=$(cat /proc/sys/kernel/pid_max)
echo "The maximum PID is: $pid_max"