const newsData = [
    {
        id: 1,
        title: "Notebook Dell Inspiron 15 13ª Geração Intel Core i7 16GB 1T Windows 11",
        image: "",
        category: "PATROCINADO",
        timestamp: "1h",
        source: "Dell Brasil",
        likes: 234,
        comments: 45
    },
    {
        id: 2,
        title: "Advogada explica erro 'bobo' de Suzane von Richthofen que coloca em risco sua",
        image: "",
        category: "CRIME",
        timestamp: "1h",
        source: "Folha de S.Paulo",
        likes: 234,
        comments: 45
    },
    {
        id: 3,
        title: "Personagens que foram mortos por culpa dos atores (e como eles morreram)",
        image: "",
        category: "ENTRETENIMENTO",
        timestamp: "2h",
        source: "Revista Veja",
        likes: 567,
        comments: 89
    },
    {
        id: 4,
        title: "Imóveis de propriedade de bancos em São Paulo - veja a lista!",
        image: "",
        category: "IMÓVEIS",
        timestamp: "3h",
        source: "Folha de S.Paulo",
        likes: 123,
        comments: 34
    },
    {
        id: 5,
        title: "Aliados de Bolsonaro ficam aliviados com decisão de Alexandre de Moraes",
        image: "",
        category: "POLÍTICA",
        timestamp: "4h",
        source: "G1",
        likes: 890,
        comments: 156
    },
    {
        id: 6,
        title: "Tecnologia revoluciona o setor de saúde",
        description: "Inovações que estão transformando a medicina",
        image: "",
        category: "SAÚDE",
        timestamp: "5h",
        source: "Estadão",
        likes: 445,
        comments: 72
    },
];

const stockData = [
    { symbol: "VALE3", name: "Vale S.A.", price: 58.42, changePercent: 2.15 },
    { symbol: "PETR4", name: "Petrobras", price: 29.85, changePercent: -1.48 },
    { symbol: "ITUB4", name: "Itaú Unibanco", price: 11.92, changePercent: 1.53 },
    { symbol: "BBDC4", name: "Bradesco", price: 16.45, changePercent: -1.91 }
];

const progressData = [
    { name: "VALE3", value: 45, positive: false },
    { name: "Banco Bradesco", value: 38, positive: false },
    { name: "Banco Itaú Unibanco", value: 52, positive: true }
];

let currentSlide = 0;
let autoPlayInterval;

function initCarousel() {
    const slides = document.querySelectorAll('.carousel-slide');
    const dotsContainer = document.getElementById('carouselDots');
    if (!slides.length) return;

    slides.forEach((_, i) => {
        const dot = document.createElement('button');
        dot.className = `carousel-dot ${i === 0 ? 'active' : ''}`;
        dot.onclick = () => goToSlide(i);
        dotsContainer.appendChild(dot);
    });

    document.getElementById('prevBtn')?.addEventListener('click', previousSlide);
    document.getElementById('nextBtn')?.addEventListener('click', nextSlide);

    startAutoPlay();
}

function showSlide(index) {
    const slides = document.querySelectorAll('.carousel-slide');
    const dots = document.querySelectorAll('.carousel-dot');
    slides.forEach(s => s.classList.remove('active'));
    dots.forEach(d => d.classList.remove('active'));
    slides[index]?.classList.add('active');
    dots[index]?.classList.add('active');
}

function nextSlide() {
    const slides = document.querySelectorAll('.carousel-slide');
    currentSlide = (currentSlide + 1) % slides.length;
    showSlide(currentSlide);
    resetAutoPlay();
}

function previousSlide() {
    const slides = document.querySelectorAll('.carousel-slide');
    currentSlide = (currentSlide - 1 + slides.length) % slides.length;
    showSlide(currentSlide);
    resetAutoPlay();
}

function goToSlide(index) {
    currentSlide = index;
    showSlide(index);
    resetAutoPlay();
}

function startAutoPlay() {
    autoPlayInterval = setInterval(nextSlide, 5000);
}

function resetAutoPlay() {
    clearInterval(autoPlayInterval);
    startAutoPlay();
}

function renderNewsGrid() {
    const newsGrid = document.getElementById('newsGrid');
    if (!newsGrid) return;

    newsGrid.innerHTML = '';

    newsData.forEach(news => {
        const card = document.createElement('div');
        card.className = 'news-card';

        card.innerHTML = `
      <div class="news-card-image">
        <img src="${news.image}" alt="${news.title}">
        <span class="news-card-badge">${news.category}</span>
      </div>
      <div class="news-card-content">
        <h3 class="news-card-title">${news.title}</h3>
        <p class="news-card-description">${news.description || ''}</p>
        <div class="news-card-meta">
          <span class="news-card-source">${news.source}</span>
          <span>${news.timestamp}</span>
        </div>
      </div>
    `;

        newsGrid.appendChild(card);
    });
}

function renderStockList() {
    const stockList = document.getElementById('stockList');
    if (!stockList) return;

    stockList.innerHTML = '';

    stockData.forEach(stock => {
        const isPositive = stock.changePercent >= 0;

        const item = document.createElement('div');
        item.className = 'stock-item';
        item.innerHTML = `
      <div class="stock-info">
        <div class="stock-symbol">${stock.symbol}</div>
        <div class="stock-name">${stock.name}</div>
      </div>
      <div class="stock-price">
        <div class="stock-value">R$ ${stock.price.toFixed(2)}</div>
        <div class="stock-change ${isPositive ? 'positive' : 'negative'}">
          ${isPositive ? '+' : ''}${stock.changePercent}%
        </div>
      </div>
    `;

        stockList.appendChild(item);
    });
}

function renderProgressList() {
    const progressList = document.getElementById('progressList');
    if (!progressList) return;

    progressList.innerHTML = '';

    progressData.forEach(item => {
        const div = document.createElement('div');
        div.className = 'progress-item';
        div.innerHTML = `
      <div style="width:100%">
        <div class="progress-label">
          <span class="progress-name">${item.name}</span>
          <span class="progress-value ${item.positive ? 'positive' : 'negative'}">
            ${item.positive ? '+' : '-'}${item.value}%
          </span>
        </div>
        <div class="progress-bar">
          <div class="progress-fill ${item.positive ? 'positive' : ''}" style="width:${item.value}%"></div>
        </div>
      </div>
    `;
        progressList.appendChild(div);
    });
}

function initNavigation() {
    document.querySelectorAll('.nav-tab').forEach(tab => {
        tab.addEventListener('click', () => {
            document.querySelectorAll('.nav-tab').forEach(t => t.classList.remove('active'));
            tab.classList.add('active');
        });
    });
}

document.addEventListener('DOMContentLoaded', () => {
    initCarousel();
    renderNewsGrid();
    renderStockList();
    renderProgressList();
    initNavigation();
});
