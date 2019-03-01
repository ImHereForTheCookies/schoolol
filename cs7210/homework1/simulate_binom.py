import numpy as np
import matplotlib.pyplot as plt
import matplotlib.colors


def plot_binomials(n, p = [0.1, 0.3, 0.5, 0.8], size = 10000, bins = 17):
    cmap = plt.cm.rainbow
    norm = matplotlib.colors.Normalize(vmin = 0, vmax = len(p))
    for i, prob in enumerate(p):
        events = [np.mean(np.random.binomial(n = n, p = prob, size = n - 1)) for i in np.arange(size)]
        events.sort()
        lower_bound = events[int(len(events)/20)]
        upper_bound = events[int(len(events)/20) * 19]
        vals, edges = np.histogram(events, bins = bins)
        edges = edges[:-1] + (edges[1] - edges[0]) / 2
        plt.plot(edges, vals, label = str(prob), color = cmap(norm(i)))
        plt.fill_between(edges, vals, facecolor = cmap(norm(i)), alpha = 0.3)
        plt.axvline(x = lower_bound, color = cmap(norm(i)), alpha = 0.5)
        plt.axvline(x = upper_bound, color = cmap(norm(i)), alpha = 0.5)
    plt.title(label = "Distribution of Average Number of Business Cards %i Participants" % (n))
    plt.yticks([])
    plt.ylim(0)
    plt.xlabel(xlabel = "Number of Business Cards Received")

plot_binomials(10, bins = 17)
plt.legend()
plt.show()

plot_binomials(20, bins = 30)
plt.legend()
plt.show()

plot_binomials(50, bins = 50)
plt.legend()
plt.show()

plot_binomials(100, bins = 50)
plt.legend()
plt.show()

plot_binomials(200, bins = 50)
plt.legend()
plt.show()

plot_binomials(500, bins = 50)
plt.legend()
plt.show()

plot_binomials(1000, bins = 50)
plt.legend()
plt.show()