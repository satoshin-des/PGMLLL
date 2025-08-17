import subprocess
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

DIFF_DIM = 10
NUM_SEED = 10
LOWER_DIM = 40
UPPER_DIM = 60

def collect_time():
    x_axis = []
    time_deepl2 = []
    time_deeplll = []
    for dim in range(LOWER_DIM, UPPER_DIM, DIFF_DIM):
        ave_sum_deepl2 = []
        ave_time_deepl2 = []
        ave_sum_deeplll = []
        ave_time_deeplll = []
        subprocess.call(["./../build/main_exec", str(dim)])
            
        ave_time_deepl2.append(float(pd.read_csv("DeepL2_times.csv")['time'][0]))
        ave_sum_deepl2.append(float(pd.read_csv("DeepL2_times.csv")['gso'][0]))
        ave_time_deeplll.append(float(pd.read_csv("DeepLLL_times.csv")['time'][0]))
        ave_sum_deeplll.append(float(pd.read_csv("DeepLLL_times.csv")['gso'][0]))
        
        time_deepl2.append(np.sum(ave_time_deepl2) / len(ave_time_deepl2))
        time_deeplll.append(np.sum(ave_time_deeplll) / len(ave_time_deeplll))
        x_axis.append(dim)
    
    fig = plt.figure()
    ax1 = fig.add_subplot(111)
    ax1.set_xlabel("dimension")
    ax1.set_ylabel("time [ms]")
    ax1.plot(x_axis, time_deepl2, marker = "", label="Time of DeepL2", color='b')
    ax1.plot(x_axis, time_deeplll, marker = "", label="Time of DeepLLL", color='c')
    
    ax2 = ax1.twinx()
    ax2.set_ylabel(r"RHF")
    #ax1.set_yscale('log')
    #ax2.set_yscale('log', base=2)
    
    h1, l1 = ax1.get_legend_handles_labels()
    h2, l2 = ax2.get_legend_handles_labels()
    ax1.legend(h1 + h2, l1 + l2)
    
    plt.tick_params()
    #plt.legend()
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
    plot_log_pgm(int(input()))
