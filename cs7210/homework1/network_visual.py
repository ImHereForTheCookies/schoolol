import numpy as np
import matplotlib.pyplot as plt
import networkx as nx

def business_graph(n, prob):
    business_cards = nx.Graph()
    business_cards.add_nodes_from(np.arange(n))
    for i in np.arange(n):
        for j in np.arange(i + 1, n):
            test = np.random.uniform(0, 1)
            if test < prob:
                business_cards.add_edge(i, j)
    plt.subplot()
    nx.draw_shell(business_cards)
    plt.title(label = "Graph of Businessmen(nodes) and Business Card Exchanges(edges)")


business_graph(20, 0.3)
plt.show()
