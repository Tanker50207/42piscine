import statistics
import subprocess

import time
import sys
import subprocess

subprocess.run(["cc", "ft_find_next_prime.c", "testeg07.c"])
subprocess.run("./a.out")
data = []
subprocess.run(["cc", "ft_find_next_prime.c", "testperf.c"])
for _ in range (1000):
    start = time.time()
    subprocess.run("./a.out", capture_output=True)
    end = time.time()
    data.append(end - start)

print("Emmanuel : Optimal until sqrt: ", statistics.mean(data));

print("compiling")
subprocess.run(["cc","-Wall", "-Werror", "-Wextra", "ft_find_next_prime.c", "testmoul.c"], capture_output=False)

print("running tests moulinette")
start = time.time()
subprocess.run(["./a.out"], capture_output=False)
end = time.time()

print("\nPerf = ", end - start)
