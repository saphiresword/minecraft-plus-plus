struct Chunk {
	int64_t x, y, z;
	Chunk *xp, *xn, *yp, *yn, *zp, *zn;
	Block Blocks[4096];
	Chunk(int64_t x, int64_t y, int64_t z);
	void Draw();
	void Update();
};

Chunk* GetChunk(int64_t x, int64_t y, int64_t z, bool generate = true);

extern vector<Chunk*> Chunks;