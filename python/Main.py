import subprocess
import matplotlib.pyplot as plt
import pandas as pd

DIFF_DIM = 10
LOWER_DIM = 40
UPPER_DIM = 151

def collect_rhf():
    x_axis = []
    lll_rhf = []
    pgm_rhf = []
    bkz_rhf = []
    for dim in range(LOWER_DIM, UPPER_DIM, DIFF_DIM):
        print(dim)
        subprocess.call(["./../build/main_exec", str(dim)])
            
        lll_rhf.append(float(pd.read_csv("rhf.csv")['LLL'][0]))
        pgm_rhf.append(float(pd.read_csv("rhf.csv")['PGMLLL'][0]))
        bkz_rhf.append(float(pd.read_csv("rhf.csv")['BKZ'][0]))
        x_axis.append(dim)
    
    fig = plt.figure()
    ax1 = fig.add_subplot(111)
    ax1.set_xlabel("dimension")
    ax1.set_ylabel("RHF")
    ax1.plot(x_axis, lll_rhf, marker = "", label="LLL")
    ax1.plot(x_axis, bkz_rhf, marker = "", label="BKZ")
    ax1.plot(x_axis, pgm_rhf, marker='', label="PGMLLL")
    
    plt.tick_params()
    plt.legend()
    plt.savefig("RHF50-200.png")
    plt.show()

def plot_log_pgm(dim):
    subprocess.call(["./../build/main_exec", str(dim)])
    
    fig = plt.figure()
    ax1 = fig.add_subplot(111)
    ax1.set_xlabel("dimension")
    ax1.set_ylabel("log of PGM")
    ax1.plot(range(len(pd.read_csv("log_pgm.csv")['value'])), pd.read_csv("log_pgm.csv")['value'], marker = "", label="log of PGM")

    plt.tick_params()
    plt.legend()
    plt.show()

if __name__ == '__main__':
    collect_rhf()
    #plot_log_pgm(int(input()))
